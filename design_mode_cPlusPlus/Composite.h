#ifndef _COMPOSITE_H
#define _COMPOSITE_H

#include <iostream>
#include <list>
#include <string>

class Company
{
protected:
	std::string name;
public:
	Company(std::string name)
	{
		this->name = name;
	}

	virtual void
		Add(Company* c) = 0;

	virtual void
		Remove(Company* c) = 0;

	virtual void
		Display(int depth) = 0;

	virtual void
		LineOfDuty() = 0;

	inline bool 
		operator==(const Company& company) const
	{
		return this->name == company.name;
	}
};

class ConcreteCompany : public Company
{
private:
	std::list<Company*> *children;
public:
	ConcreteCompany(std::string name)
		: Company(name)
	{
		children = new std::list<Company*>;
	}

	~ConcreteCompany()
	{
		if (NULL != children) {
			for (std::list<Company*>::iterator it = children->begin(); it != children->end(); ++it) {
				delete *it;
			}

			delete children;
		}
	}

	void Add(Company* c)
	{
		children->push_back(c);
	}

	void Remove(Company* c)
	{
		for (std::list<Company*>::const_iterator it = children->begin(); it != children->end(); ++it) {
			if (**it == *c) {
				children->erase(it);
				break;
			}
		}
	}

	void Display(int depth)
	{
		for (int i = 0; i < depth; ++i) {
			std::cout << "-";
		}

		std::cout << name << std::endl;
		for (std::list<Company*>::iterator it = children->begin(); it != children->end(); ++it) {
			(*it)->Display(depth + 4);
		}
	}

	void LineOfDuty() {
		for (std::list<Company*>::const_iterator it = children->begin(); it != children->end(); ++it) {
			(*it)->LineOfDuty();
		}
	}
};

class HRDepartment : public Company
{
public:
	HRDepartment(std::string name)
		: Company(name) {}

	void Add(Company* c) {} 
	
	void Remove(Company* c) {}

	void Display(int depth)
	{
		for (int i = 0; i < depth; ++i) {
			std::cout << "-";
		}

		std::cout << name << std::endl;
	}

	void LineOfDuty()
	{
		std::cout << name << "  员工招聘培训管理" << std::endl;
	}
};


class FinanceDepartment : public Company
{
public:
	FinanceDepartment(std::string name) 
		: Company(name) {}

	void Add(Company* c) {}

	void Remove(Company* c) {}

	void Display(int depth)
	{
		for (int i = 0; i < depth; ++i)
		{
			std::cout << "-";
		}

		std::cout << name << std::endl;
	}

	void LineOfDuty()
	{
		std::cout << name << "  公司财务收支管理" << std::endl;
	}
};
#endif // !_COMPOSITE_H
