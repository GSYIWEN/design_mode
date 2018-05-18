#ifndef _OPERATIONADD_H
#define _OPERATIONADD_H
#include "Operation.h"

class OperationAdd : public Operation
{
public:
	double GetResult() {
		double result = 0;
		result = numberA + numberB;
		return result;
	}
};

#endif // !
