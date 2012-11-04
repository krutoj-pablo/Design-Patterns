/*
 * =====================================================================================
 *
 *       Filename:  tiger.h
 *
 *    Description:  Header file for Tiger class
 *
 *        Version:  1.0
 *        Created:  11/04/2012 08:09:45 PM
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

#include <string>

#include "animal.h"

class Tiger: public Animal
{
	public:
		Tiger(Tiger &);
		virtual ~Tiger(){};
		virtual Animal *clone();
		virtual void print();
	private:
		std::string m_strTigerName;
		int m_iTigerNumber;

};

#endif
