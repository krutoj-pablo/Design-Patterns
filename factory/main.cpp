/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main object factory method
 *
 *        Version:  1.0
 *        Created:  10/22/2012 07:36:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */

#include <cstdlib>
#include <cstdio>

#include "animal_factory.h"
#include "animal.h"

int main(int argc, char **argv)
{
	AnimalFactory factory("animals.xml");
	factory.printAnimals();

	Animal *a = factory.createAnimal("tiger");
	a->makeSound();
	a->run();
	Animal *b = factory.createAnimal("elephant");
	b->makeSound();
	b->run();
	delete a;
	delete b;
	return EXIT_SUCCESS;
}
