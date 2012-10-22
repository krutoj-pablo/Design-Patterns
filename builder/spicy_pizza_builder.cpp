/*
 * =====================================================================================
 *
 *       Filename:  spicy_pizza_builder.cpp
 *
 *    Description:  Implementation of spicy pizza builder class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 05:09:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Edelight
 *
 * =====================================================================================
 */
#include "pizza.h"
#include "spicy_pizza_builder.h"

void SpicyPizzaBuilder::buildDough()
{
	m_pizza->setDough("pan baked");
}
void SpicyPizzaBuilder::buildSouce()
{
	m_pizza->setSouce("spicy");
}
void SpicyPizzaBuilder::buildTopping()
{
	m_pizza->setTopping("Ham and Piperony and Salami");
}
void SpicyPizzaBuilder::buildSize()
{
	m_pizza->setSize(SMALL);
}
