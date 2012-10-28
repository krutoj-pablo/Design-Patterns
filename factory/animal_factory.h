/*
 * =====================================================================================
 *
 *       Filename:  animal_factory.h
 *
 *    Description:  Definition of animal factory class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 09:02:19 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */
#ifndef ANIMAL_FACTORY_H
#define ANIMAL_FACTORY_H

#include <libxml/parser.h>
#include <libxml/tree.h>


#include <string>
#include <map>
#include <stdexcept>

class Animal;

class AnimalFactory
{
	public:
		AnimalFactory(std::string config_name);
		virtual ~AnimalFactory();
		std::map<std::string, std::string> getAnimalsMap() const;
		void printAnimals();
		Animal* createAnimal(std::string animal_type);
	private:
		void readAnimalsMap(xmlNode *node);
		std::map<std::string, std::string> m_animals;
};
#endif
