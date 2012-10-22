/*
 * =====================================================================================
 *
 *       Filename:  elephant.cpp
 *
 *    Description:  Implementation of elephant class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 08:57:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */

#include <iostream>

#include "elephant.h"

void Elephant::run() const
{
	std::cout << "Elephant is running slowly" << std::endl;
}

void Tiger::makeSound() const
{
	std::cout << "Tiger is making super loud and scary sound" << std::endl;
}
