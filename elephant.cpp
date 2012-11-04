/*
 * =====================================================================================
 *
 *       Filename:  elephant.cpp
 *
 *    Description:  Impelementation of Elephant class
 *
 *        Version:  1.0
 *        Created:  11/04/2012 08:30:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */

#include "animal.h"

Elephant::Elephant(Elephant &e)
{
	m_strElephantName = e.m_strElephantName;
	m_iElephantNumber = e.m_iElephantNumber;
}

Animal *Elephant::clone()
{
	return new Elephant(*this);
}

void Elephant::Elephant()
{
	std::cout << "Elephant number is: " << m_iElephantNumber << "Tiger name is: " << m_strElephantName << std::endl;
}
