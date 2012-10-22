/*
 * =====================================================================================
 *
 *       Filename:  hawaiyan_pizza_builder.cpp
 *
 *    Description:  Implementation of HawaiyanPizzaBuilder class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 04:41:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Edelight
 *
 * =====================================================================================
 */
#include "pizza.h"
#include "hawaiyan_pizza_builder.h"

void HawaiyanPizzaBuilder::buildDough()
{
	m_pizza->setDough("cross");
}
void HawaiyanPizzaBuilder::buildSouce()
{
	m_pizza->setSouce("mild");
}
void HawaiyanPizzaBuilder::buildTopping()
{
	m_pizza->setTopping("Ham and Pineapple");
}
void HawaiyanPizzaBuilder::buildSize()
{
	m_pizza->setSize(SMALL);
}


