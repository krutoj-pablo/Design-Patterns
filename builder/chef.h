/*
 * =====================================================================================
 *
 *       Filename:  chef.h
 *
 *    Description:  Definition of Chef class
 *
 *        Version:  1.0
 *        Created:  10/22/2012 05:13:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Edelight
 *
 * =====================================================================================
 */

#ifndef CHEF_H
#define CHEF_H

class Pizza;
class PizzaBuilder;

class Chef
{
	public:
		void setPizzaBuilder(PizzaBuilder *builder);
		void constructPizza();
		Pizza *getPizza();
	
	private:
		PizzaBuilder *m_builder;

};

#endif
