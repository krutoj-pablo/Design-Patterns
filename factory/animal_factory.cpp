/*
 * =====================================================================================
 *
 *       Filename:  animal_factory.cpp
 *
 *    Description:  Implementation of animal factory class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 09:26:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
*/

#include <cstring>
#include <iostream>
#include <algorithm>
#include <iterator>

#include <dlfcn.h>

#include "animal.h"
#include "animal_factory.h"

AnimalFactory::AnimalFactory(std::string config_name)
{
	xmlDoc *doc = NULL;
	xmlNode *rootElement = NULL;
	
	doc = xmlReadFile(config_name.c_str(), NULL, 0);
	if(doc == NULL)
		std::cout << "Ivalid xml configuration file" << std::endl;
	rootElement = xmlDocGetRootElement(doc);
	readAnimalsMap(rootElement);
	
	xmlFreeDoc(doc);
	xmlCleanupParser();
}

AnimalFactory::~AnimalFactory()
{}

std::map<std::string, std::string> AnimalFactory::getAnimalsMap() const
{
	return m_animals;
}
Animal* AnimalFactory::createAnimal(std::string animal_name)
{
	create_t* mkr;
	char* error;
	
	Animal *animal;
	
	if(m_animals.find(animal_name) != m_animals.end())
	{	
		std::string dl_name = m_animals[animal_name];

		void *lib_handle = dlopen(dl_name.c_str(), RTLD_LAZY);
		if(!lib_handle)
			throw std::invalid_argument("Shared object not found");
		else
		{
			mkr = reinterpret_cast<create_t *>(dlsym(lib_handle, "create"));
			if((error = dlerror()) != NULL)
			{
				throw "Unable to ceate an object";
			}
			animal = (*mkr)();
		}
	}
	return animal;
}

void AnimalFactory::printAnimals()
{
	std::map<std::string, std::string>::iterator iter = m_animals.begin();
	for(; iter != m_animals.end(); iter++)
		std::cout << iter->first << " " << iter->second << std::endl;;
}

void AnimalFactory::readAnimalsMap(xmlNode *node)
{
	xmlNode *cur_node = NULL;

	for(cur_node = node; cur_node; cur_node = cur_node->next)
	{
		if(cur_node->type == XML_ELEMENT_NODE && xmlStrcmp(cur_node->name, (const xmlChar *)"animals") == 0)
		{
			xmlNode *animal_node = NULL;
			for(animal_node = cur_node->children; animal_node; animal_node=animal_node->next)
			{
				if(animal_node->type == XML_ELEMENT_NODE && xmlStrcmp(animal_node->name, (const xmlChar *)"animal") == 0)
				{
					char *animal_name = reinterpret_cast<char *>(xmlNodeGetContent(animal_node));
					char *animal_lib = reinterpret_cast<char *>(xmlGetProp(animal_node, (const xmlChar *)"lib"));
					m_animals.insert(std::make_pair<std::string, std::string>(std::string(animal_name), std::string(animal_lib)));
					xmlFree(animal_name);
					xmlFree(animal_lib);
				}
			}
		}
		else
			readAnimalsMap(cur_node->children);
	}
}

