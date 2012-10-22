/*
 * =====================================================================================
 *
 *       Filename:  animal.h
 *
 *    Description:  Header file for general animal class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 07:39:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
	public:
		virtual void run() const = 0;
		virtual void makeSound() const = 0;
};

#endif
