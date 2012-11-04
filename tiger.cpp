/*
 * =====================================================================================
 *
 *       Filename:  tiger.cpp
 *
 *    Description:  Implementation of Tiger class
 *
 *        Version:  1.0
 *        Created:  11/04/2012 08:15:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */
#include <iostream>
#include "tiger.h"

Tiger::Tiger(std::string name, int number):m_strTigerName(name), m_iTigerNumber(number)
{
}
Tiger::Tiger(Tiger &t)
{
	m_strTigerName = t.m_strTigerName;
	m_iTigerNumber = t.m_iTigerNumber
}

Animal *Tiger::clone()
{
	return new Tiger(*this);
}

void Tiger::print()
{
	std::cout << "Tiger number is: " << m_iTigerNumber << "Tiger name is: " << m_strTigerName << std::endl;
}
