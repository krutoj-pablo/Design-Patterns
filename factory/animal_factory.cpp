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

#include "animal_factory.h"

AnimalFactory::AnimalFactory(std::string config_name)
{
	xmlDoc *doc = NULL;
	xmlNode *rootElement = NULL;
	
	doc = xmlReadFile(config_name.c_str(), NULL, 0);
	if(doc == NULL)
		std::cout << "Ivalid xml configuration file" << std::endl;
	rootElement = xmlDocGetRootElement(doc);
	getAnimalsVector(rootElement);
	
	xmlFreeDoc(doc);
	xmlCleanupParser();
}

AnimalFactory::~AnimalFactory()
{}

void AnimalFactory::getAnimalsVector(xmlNode *node)
{
	xmlNode *cur_node = NULL;
	std::vector<std::string> animal_vector;

	for(cur_node = node; cur_node != NULL; cur_node = cur_node->next)
	{
		if(cur_node->type == XML_ELEMENT_NODE && strcmp((char *)cur_node->name, "animals") == 0)
		{
			for(xmlNode *animal_node = cur_node; animal_node != NULL; animal_node=animal_node->next)
				animal_vector.push_back(std::string((char *)animal_node->content));
		}
		else
			getAnimalsVector(cur_node->children);
	}
}

