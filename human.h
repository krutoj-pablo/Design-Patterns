/*
 * =====================================================================================
 *
 *       Filename:  human.h
 *
 *    Description:  Header file for Human class
 *
 *        Version:  1.0
 *        Created:  11/04/2012 08:37:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Private Company
 *
 * =====================================================================================
 */

#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "animal.h"

class Human : public Animal
{
	public:
		Human(std::string, int);
		Human(Human &h);
		virtual ~Human(){};
		virtual Animal *clone();
		virtual void print();
	private:
		std::string m_strHumanName;
		int m_iHumanNumber;
};
#endif
