/*
 * =====================================================================================
 *
 *       Filename:  tiger.h
 *
 *    Description:  Definition of Tiger class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 07:45:19 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */

#ifndef TIGER_H
#define TIGER_H

#include "animal.h"

class Tiger : public Animal
{
	public:
		virtual void run() const ;
		virtual void makeSound() const;
};
#endif

