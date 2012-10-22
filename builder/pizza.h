#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>

enum PIZZA_SIZE
{
	SMALL = 0,
	MEDIUM,
	LARGE,
	FAMILY
};


class Pizza
{
	public:
		friend std::ostream & operator << (std::ostream &output, Pizza &p);
		
		Pizza(){};
		virtual ~Pizza(){};
		
		void setDough(const std::string &dough);
		void setSouce(const std::string &souce);
		void setTopping(const std::string &topping);
		void setSize(const PIZZA_SIZE &size);
	private:
		std::string m_dough;
		std::string m_souce;
		std::string m_topping;

		PIZZA_SIZE m_size;

};
#endif
