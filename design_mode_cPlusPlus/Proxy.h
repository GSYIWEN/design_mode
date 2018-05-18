#ifndef _PROXY_H
#define _PROXY_H

#include <iostream>
#include <string>

class SchoolGirl
{
private:
	std::string name;
public:
	void setName(std::string name)
	{
		this->name = name;
	}

	std::string getName()
	{
		return name;
	}
};

class IGiveGift
{
public:
	virtual void GiveDolls() = 0;
	virtual void GiveFlowers() = 0;
	virtual void GiveChocolate() = 0;
};

class Pursuit : public IGiveGift
{
private:
	SchoolGirl * mm;
public:
	Pursuit(SchoolGirl* mm)
	{
		this->mm = mm;
	}

	void GiveDolls() {
		std::cout << mm->getName() << "  ËÍÄãÑóÍÞÍÞ" << std::endl;
	}

	void GiveFlowers() {
		std::cout << mm->getName() << "  ËÍÄãÏÊ»¨" << std::endl;
	}

	void GiveChocolate() {
		std::cout << mm->getName() << "  ËÍÄãÇÉ¿ËÁ¦" << std::endl;
	}
};

class Proxy : public IGiveGift
{
private:
	Pursuit * gg;
public:
	Proxy(SchoolGirl* mm)
	{
		gg = new Pursuit(mm);
	}

	void GiveDolls() {
		gg->GiveDolls();
	}

	void GiveFlowers() {
		gg->GiveFlowers();
	}

	void GiveChocolate() {
		gg->GiveChocolate();
	}
};
#endif // !_PROXY_H
