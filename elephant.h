/*
 * =====================================================================================
 *
 *       Filename:  elephant.h
 *
 *    Description:  Declaration of Elephant class
 *
 *        Version:  1.0
 *        Created:  11/04/2012 08:24:06 PM
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

#include <string>

#include "animal.h"

class Elephant : public Animal
{
	public:
		Elephant();
		Elephant(Elephant &e);
		virtual ~Elephant() {};
		virtual Animal *clone();
		virtual void print();
	private:
		std::string m_strElephantName;
		int m_iElephantNuber;
};
#endif

