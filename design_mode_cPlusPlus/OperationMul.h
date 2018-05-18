#ifndef _OPERATIONMUL_H
#define _OPERATIONMUL_H
#include "Operation.h"
#include <stdio.h>
#include <iostream>
class OperationMul : public Operation
{
public:
	double GetResult() {
		double result = 0;
		result = numberA * numberB;
		return result;
	}
};

class OperationSub : public Operation
{
public:
	double GetResult() {
		double result = 0.0;
		result = numberA - numberB;
		return result;
	}
};

class OperationDiv : public Operation
{
public:
	double GetResult() {
		double result = 0;
		//printf("numberA is %f, numberB is %f\n", numberA, numberB);
		if (numberB != 0) {
			result = numberA / numberB;
			//printf("result is %f", result);
		}
		return result;
	}
};
#endif // !_OPERATIONMUL_H
