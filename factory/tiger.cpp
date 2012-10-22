/*
 * =====================================================================================
 *
 *       Filename:  tiger.cpp
 *
 *    Description:  Implementation of Tiger class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 07:47:37 PM
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

void Tiger::run() const
{
	std::cout << "Tiger is getting fast acceleration" << std::endl;
}

void Tiger::makeSound() const
{
	std::cout << "Tiger is making super loud sound " << std::endl;
}
