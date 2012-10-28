/*
 * =====================================================================================
 *
 *       Filename:  elephant.h
 *
 *    Description:  Declareation of elephant class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 08:32:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */

#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "animal.h"

class Elephant: public Animal
{		
	virtual void run() const;
	virtual void makeSound() const;
};
#endif
