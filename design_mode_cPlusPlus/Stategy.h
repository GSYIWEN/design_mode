#ifndef _STRATEGY_H
#define _STRATEGY_H
#include <string>
#include <math.h>	

class CashSuper
{
public:
	virtual double acceptCash(double money) = 0;
};

class CashNormal : public CashSuper
{
public:
	double acceptCash(double money) {
		return money;
	}
};

class CashReturn : public CashSuper
{
private:
	double moneyCondition;
	double moneyReturn;
public:
	CashReturn(double moneyCondition, double moneyReturn) {
		this->moneyCondition = moneyCondition;
		this->moneyReturn = moneyReturn;
	}

	double acceptCash(double money) {
		double result = money;
		if (money > moneyCondition) {
			result = money - floor(money / moneyCondition) * moneyReturn;
		}
		return result;
	}
};

class CashRebate : public CashSuper
{
private:
	double moneyRebate;
public:
	CashRebate(double moneyRebate) {
		this->moneyRebate = moneyRebate;
	}

	double acceptCash(double money) {
		return money * moneyRebate;
	}
};
#endif // !_STRATEGY_H
