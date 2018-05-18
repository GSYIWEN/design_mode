#ifndef  _OPERATION_H
#define  _OPERATION_H

class Operation
{
protected: 
	double numberA;
	double numberB;

public:
	inline double getA() {
		return numberA;
	}

	inline double getB() {
		return numberB;
	}

	inline void setA(double number) {
		numberA = number;
	}

	inline void setB(double number) {
		numberB = number;
	}

	virtual double GetResult() {
		double result = 0.0;
		return result;
	}

};
#endif // ! _OPERATION_H
