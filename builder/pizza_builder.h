/*
 * =====================================================================================
 *
 *       Filename:  pizza_bulder.h
 *
 *    Description:  Builder class for pizza object
 *
 *        Version:  1.0
 *        Created:  10/22/2012 04:12:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Edelight
 *
 * =====================================================================================
 */

#ifndef PIZZA_BUILDER_H
#define PIZZA_BUILDER_H

class Pizza;

class PizzaBuilder
{
	public:
		Pizza *getPizza();
		void createNewPizzaProduct();

		virtual void buildDough() = 0;
		virtual void buildSouce() = 0;
		virtual void buildTopping() = 0;
		virtual void buildSize() = 0;
	protected:
		Pizza *m_pizza;

};

#endif
