#ifndef _FINERY_H
#define _FINERY_H

#include <iostream>
#include "Person.h"

class Finery : public Person
{
protected:
	Person * component;
public:
	void Decorator(Person* component)
	{
		this->component = component;
	}

	void show() {
		if (NULL != component) {
			component->show();
		}
	}
};

class TShirt : public Finery
{
public:
	void show()
	{
		std::cout << "大T恤  ";
		Finery::show();
	}
};

class BigTrouser : public Finery
{
public:
	void show()
	{
		std::cout << "垮裤  ";
		Finery::show();
	}
};

//ConcreteDecorator类  
class Sneakers :public Finery
{
public:
	void Show()
	{
		std::cout << "破球鞋  ";
		Finery::show();
	}

};

class Suit : public Finery
{
public:
	void show()
	{
		std::cout << "西装  ";
		Finery::show();
	}
};

//ConcreteDecorator类  
class Tie :public Finery
{
public:
	void Show()
	{
		std::cout << "领带  ";
		Finery::show();
	}

};

class LeatherShoes : public Finery
{
public:
	void show()
	{
		std::cout << "皮鞋  ";
		Finery::show();
	}
};
#endif // !_FINERY_H
