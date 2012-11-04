/*
 * =====================================================================================
 *
 *       Filename:  animal.h
 *
 *    Description:  Header file for animal base class
 *
 *        Version:  1.0
 *        Created:  11/04/2012 08:06:13 PM
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
		Animal(){};
		virtual ~Animal(){};
		virtual Animal* clone() = 0;
		virtual void print() = 0;
};
#endif
