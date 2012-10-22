/*
 * =====================================================================================
 *
 *       Filename:  chef.cpp
 *
 *    Description:  Implementation of Chef class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 05:16:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Edelight
 *
 * =====================================================================================
 */

#include "chef.h"
#include "pizza.h"
#include "pizza_builder.h"

void Chef::setPizzaBuilder(PizzaBuilder *builder)
{
	m_builder = builder;
}

void Chef::constructPizza()
{
	m_builder->createNewPizzaProduct();
	m_builder->buildDough();
	m_builder->buildSouce();
	m_builder-> buildTopping();
	m_builder->buildSize();
}

Pizza* Chef::getPizza()
{
	return m_builder->getPizza();
}
