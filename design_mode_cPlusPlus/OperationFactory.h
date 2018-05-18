#ifndef _OPERATIONFACTORY_H
#define _OPERATIONFACTORY_H
#include "Operation.h"
#include "OperationAdd.h"
#include "OperationMul.h"

class Operation;

class OperationFactory
{
public:
	Operation * createOperation(char type) {
		Operation* oper;
		switch (type)
		{
		case '+': 
			oper = new OperationAdd;
			break;
		case '-':
			oper = new OperationSub;
			break;
		case '*':
			oper = new OperationMul;
			break;
		case '/':
			oper = new OperationDiv;
			break;
		}

		return oper;
	}
};
#endif // !_OPERATIONFACTORY_H
