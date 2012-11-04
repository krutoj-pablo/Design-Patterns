/*
 * =====================================================================================
 *
 *       Filename:  human.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/04/2012 08:39:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */
#include <iostream>
#include "human.h"

Human::Human(std::string name, int number):m_strHumanName(name), m_iHumanNumber(number)
{
}

Human::Human(Human &e)
{
	m_strHumanName = e.m_strHumanName;
	m_iHumanNumber = e.m_iHumanNumber;
}

Animal *Human::clone()
{
	return new Human(*this);
}

void Human::print()
{
	std::cout << "Human number is: " << m_iHumanNumber << "Tiger name is: " << m_strHumanName << std::endl;
}
