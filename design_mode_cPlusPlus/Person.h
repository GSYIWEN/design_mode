#ifndef _PERSON_H
#define _PERSON_H

#include <string>
#include <iostream>

class Person
{
private:
	std::string name;

public:
	Person() {};
	Person(std::string name) {
		this->name = name;
	}

	virtual void show() {
		std::cout << "×°ÊÎµÄ" << name << std::endl;
	}
};
#endif // !_PERSON_H
