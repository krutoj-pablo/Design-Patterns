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
	readAnimalsVector(rootElement);
	
	xmlFreeDoc(doc);
	xmlCleanupParser();
}

AnimalFactory::~AnimalFactory()
{}

std::vector<std::string> AnimalFactory::getAnimalsList()
{
	return m_animals;
}
Animal* AnimalFactory::createAnimal(std::string animal_name)
{
	Animal *a;
	std::vector<std::string>::iterator iter = std::find(m_animals.begin(), m_animals.end(), animal_name);
	if(iter != m_animals.end())
	{	
		std::string dl_name = *iter + std::string(".so");
		(Animal *) fn * (void);

		void *lib_handle = dlopen(dl_name.c_str(), RTD_LAZY);
		if(!lib_handle)
			throw std::invalid_argument("Shared object not found");
		else
		{
			fn = (create_t *) dlsym(lib_handle, "create");
			a = (*fn);
			dlclose(lib_handle);
		}
	}
	return a;
}

void AnimalFactory::printAnimals() const
{
	std::copy(m_animals.begin(), m_animals.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
}

void AnimalFactory::readAnimalsVector(xmlNode *node)
{
	xmlNode *cur_node = NULL;

	for(cur_node = node; cur_node; cur_node = cur_node->next)
	{
		if(cur_node->type == XML_ELEMENT_NODE && xmlStrcmp(cur_node->name, (const xmlChar *)"animals") == 0)
		{
			xmlNode *animal_node = NULL;
			for(animal_node = cur_node->children; animal_node; animal_node=animal_node->next)
				if(animal_node->type == XML_ELEMENT_NODE && xmlStrcmp(animal_node->name, (const xmlChar *)"animal") == 0)
					m_animals.push_back(std::string((char *)xmlNodeGetContent(animal_node)));
		}
		else
			readAnimalsVector(cur_node->children);
	}
}

