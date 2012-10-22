/*
 * =====================================================================================
 *
 *       Filename:  pizza_bulder.cpp
 *
 *    Description:  Pizza builder class implementation
 *
 *        Version:  1.0
 *        Created:  10/22/2012 04:17:30 PM
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

Pizza *PizzaBuilder::getPizza()
{
	return m_pizza;
}

void PizzaBuilder::createNewPizzaProduct()
{
	m_pizza = new Pizza();
}

