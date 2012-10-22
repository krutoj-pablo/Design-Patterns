/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main program module
 *
 *        Version:  1.0
 *        Created:  10/22/2012 03:45:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Edelight
 *
 * =====================================================================================
 */
#include "pizza.h"
#include "pizza_builder.h"
#include "hawaiyan_pizza_builder.h"
#include "spicy_pizza_builder.h"
#include "chef.h"

int main(int argc, char **argv)
{
	Chef chef;
	PizzaBuilder *hpb = new HawaiyanPizzaBuilder();
	PizzaBuilder *spb = new SpicyPizzaBuilder();
	Pizza *p;

	chef.setPizzaBuilder(hpb);
	chef.constructPizza();
	p = chef.getPizza();
	std::cout << *p << std::endl;
	delete p;
	delete hpb;
	chef.setPizzaBuilder(spb);
	chef.constructPizza();
	p = chef.getPizza();
	std::cout << *p << std::endl;
	delete p;
	delete spb;

	return 0;
}
