/*
 * =====================================================================================
 *
 *       Filename:  spicy_pizza_builder.h
 *
 *    Description:  Header file for spicy pizza builder
 *
 *        Version:  1.0
 *        Created:  10/22/2012 05:07:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Edelight
 *
 * =====================================================================================
 */
#ifndef SPICY_PIZZA_BUILDER
#define SPICY_PIZZA_BUILDER

#include "pizza_builder.h"

class SpicyPizzaBuilder: public PizzaBuilder
{
	public:
		virtual void buildDough();
		virtual void buildSouce();
		virtual void buildTopping();
		virtual void buildSize();
};
#endif

