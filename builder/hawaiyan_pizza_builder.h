/*
 * =====================================================================================
 *
 *       Filename:  hawaiyan_pizza_builder.h
 *
 *    Description:  Header file for Hawaiyan pizza builder
 *
 *        Version:  1.0
 *        Created:  10/22/2012 04:32:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pavel Ponomariov (Pavel), pavelponomariov@gmail.com
 *        Company:  Edelight
 *
 * =====================================================================================
 */

#ifndef HAWAIYAN_PIZZA_BUILDER_H
#define HAWAIYAN_PIZZA_BUILDER_H

#include "pizza_builder.h"

class HawaiyanPizzaBuilder: public PizzaBuilder
{
	public:
		virtual void buildDough();
		virtual void buildSouce();
		virtual void buildTopping();
		virtual void buildSize();
};
#endif
