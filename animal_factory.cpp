/*
 * =====================================================================================
 *
 *       Filename:  animal_factory.cpp
 *
 *    Description:  Implementation of AnimalFactory class
 *
 *        Version:  1.0
 *        Created:  11/04/2012 08:47:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */
#include "animal.h"
#include "tiger.h"
#include "elephant.h"
#include "human.h"
#include "animal_factory.h"

AnimalFactory::AnimalFactory()
{
	m_animalsMap["tiger"] = new Tiger("Sher Khahn", 10);
	m_animalsMap["elephant"] = new Elephant("King", 4);
	m_animalsMap["human"] = new Human("Ricardo", 25);
}

AnimalFactory::~AnimalFactory()
{
	std::map<std::string, Animal*>::iterator iter = m_animalsMap.begin();
	for(; iter != m_animalsMap.end(); iter++)
		delete iter->second;
}

Animal* AnimalFactory::createAnimal(std::string name)
{
	return m_animalsMap[name]->clone();
}
