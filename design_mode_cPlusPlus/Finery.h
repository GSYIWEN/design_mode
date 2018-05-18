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
		std::cout << "��T��  ";
		Finery::show();
	}
};

class BigTrouser : public Finery
{
public:
	void show()
	{
		std::cout << "���  ";
		Finery::show();
	}
};

//ConcreteDecorator��  
class Sneakers :public Finery
{
public:
	void Show()
	{
		std::cout << "����Ь  ";
		Finery::show();
	}

};

class Suit : public Finery
{
public:
	void show()
	{
		std::cout << "��װ  ";
		Finery::show();
	}
};

//ConcreteDecorator��  
class Tie :public Finery
{
public:
	void Show()
	{
		std::cout << "���  ";
		Finery::show();
	}

};

class LeatherShoes : public Finery
{
public:
	void show()
	{
		std::cout << "ƤЬ  ";
		Finery::show();
	}
};
#endif // !_FINERY_H
