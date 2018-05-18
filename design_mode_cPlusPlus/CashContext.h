#ifndef  _CASHCONTEXT_H
#define  _CASHCONTEXT_H

#include "Stategy.h"

class CashContext
{
private:
	CashSuper * cs;
public:
	CashContext(int type)
	: cs(NULL)
	{
		switch (type)
		{
		case 1:
		{
			cs = new CashNormal();
			break;
		}
		case 2:
		{
			cs = new CashReturn(300, 100);
			break;
		}
		case 3:
		{
			cs = new CashRebate(0.8);
			break;
		}
		default:
			break;
		}
	}

	~CashContext()
	{
		if (NULL != cs) {
			delete cs;
			cs = NULL;
		}
	}

	double GetResult(double money) {
		return cs->acceptCash(money);
	}
};
#endif // ! _CASHCONTEXT_H
