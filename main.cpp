/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  main module
 *
 *        Version:  1.0
 *        Created:  11/04/2012 09:14:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */
#include "animal.h"
#include "animal_factory.h"

int main(int argc, char **argv)
{
	Animal *tiger, *elephant, *human;
	AnimalFactory factory;
	tiger = factory.createAnimal("tiger");
	elephant = factory.createAnimal("elephant");
	human = factory.createAnimal("human");
	
	tiger->print();
	elephant->print();
	human->print();

	delete tiger;
	delete elephant;
	delete human;
}
