/*
 * =====================================================================================
 *
 *       Filename:  pizza.cpp
 *
 *    Description:  Implementation of Pizza class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 03:34:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */
#include "pizza.h"

std::ostream &operator << (std::ostream &output, Pizza &pizza)
{
	output << " Pizza with " << pizza.m_topping << " and made from: " << pizza.m_dough << " with souce: "
		   << pizza.m_souce << " size: " << pizza.m_size << std::endl;  
	return output;
}

void Pizza::setDough(const std::string &dough)
{
	m_dough = dough;
}
	
void Pizza::setSouce(const std::string &souce)
{
	m_souce = souce;
}

void Pizza::setTopping(const std::string &topping)
{
	m_topping = topping;
}

void Pizza::setSize(const PIZZA_SIZE &size)
{
	m_size = size;
}

