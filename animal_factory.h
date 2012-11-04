/*
 * =====================================================================================
 *
 *       Filename:  animal_factory.h
 *
 *    Description:  Declaration of Animal Factory class
 *
 *        Version:  1.0
 *        Created:  11/04/2012 08:43:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */

#ifndef ANIMAL_FACTORY
#define ANIMAL_FACTORY

#include <map>
#include <string>

class Animal;

class AnimalFactory
{
	public:
		AnimalFactory();
		virtual ~AnimalFactory();
		Animal *createAnimal(std::string name);
	private:
		std::map<std::string, Animal *> m_animalsMap;
}

#endif
