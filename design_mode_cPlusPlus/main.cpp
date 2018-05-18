//#include <iostream>  
//#include <cstdlib>  
//#include <stdio.h>
//#include "OperationFactory.h"
//
////using namespace std;
//
//void main()
//{
	//   ---------------factory-------------

	//Operation* oper = NULL;

	//OperationFactory of;
	//oper = of.createOperation('/');
	//oper->setA(2);
	//oper->setB(2);
	//std::cout << oper->GetResult() << std::endl;
	//if (oper != NULL)
	//{
	//	delete oper;
	//	oper = NULL;
	//}
	//system("pause");

	//   ---------------factory-------------


	



	
//}


//---------------------strategy---------------------

//#include "CashContext.h"  
//#include <iostream>  
//#include <stdlib.h>  
//
//void main()
//{
//	double total = 0;
//	double totalPrices = 0;
//
//	//正常收费  
//	CashContext* cc1 = NULL;
//	cc1 = new CashContext(1);
//	totalPrices = cc1->GetResult(300);
//	total += totalPrices;
//	std::cout << "Type:正常收费  totalPrices:" << totalPrices << "  total:" << total << std::endl;
//	totalPrices = 0;
//
//	//返现类型  
//	CashContext* cc2 = NULL;
//	cc2 = new CashContext(2);
//	totalPrices = cc2->GetResult(700);
//	total += totalPrices;
//	std::cout << "Type:满300返100  totalPrices:" << totalPrices << "  total:" << total << std::endl;
//	totalPrices = 0;
//
//	//打折类型  
//	CashContext* cc3 = NULL;
//	cc3 = new CashContext(3);
//	totalPrices = cc3->GetResult(300);
//	total += totalPrices;
//	std::cout << "Type:打8折  totalPrices:" << totalPrices << "  total:" << total << std::endl;
//	totalPrices = 0;
//
//	if (cc1 != NULL)
//	{
//		delete cc1;
//		cc1 = NULL;
//	}
//	if (cc2 != NULL)
//	{
//		delete cc2;
//		cc2 = NULL;
//	}
//	if (cc3 != NULL)
//	{
//		delete cc3;
//		cc3 = NULL;
//	}
//	system("pause");
//}

//---------------------strategy---------------------


//-------------------装饰----------------------------

//#include "Finery.h"
//#include <string>
//#include <iostream>
//
//
//void main()
//{
//	Person* xc = NULL;
//	xc = new Person("小菜");
//
//	std::cout << "第一种装扮: " << std::endl;
//	Sneakers* pqx = NULL;
//	pqx = new Sneakers();
//	BigTrouser* kk = NULL;
//	kk = new BigTrouser();
//	TShirt* dtx = NULL;
//	dtx = new TShirt();
//
//	pqx->Decorator(xc);
//	kk->Decorator(pqx);
//	dtx->Decorator(kk);
//
//	dtx->show();
//
//	std::cout << "第二种装扮：" << std::endl;
//
//	LeatherShoes* px = NULL;
//	px = new LeatherShoes();
//	Tie* ld = NULL;
//	ld = new Tie();
//	Suit* xz = NULL;
//	xz = new Suit();
//
//	px->Decorator(xc);
//	ld->Decorator(px);
//	xz->Decorator(ld);
//
//	xz->show();
//
//	if (xc != NULL)
//	{
//		delete xc;
//		xc = NULL;
//	}
//	if (pqx != NULL)
//	{
//		delete pqx;
//		pqx = NULL;
//	}
//	if (kk != NULL)
//	{
//		delete kk;
//		kk = NULL;
//	}
//	if (dtx != NULL)
//	{
//		delete dtx;
//		dtx = NULL;
//	}
//	if (px != NULL)
//	{
//		delete px;
//		px = NULL;
//	}
//	if (ld != NULL)
//	{
//		delete ld;
//		ld = NULL;
//	}
//	if (xz != NULL)
//	{
//		delete xz;
//		xz = NULL;
//	}
//
//	system("pause");
//}


//-------------------装饰----------------------------


//-------------------代理------------------------------

//#include "Proxy.h"  
//#include <iostream>  
//#include <stdlib.h>  
//
////Client，客户端  
//void main()
//{
//	SchoolGirl* jiaojiao = new SchoolGirl();
//	jiaojiao->setName("李娇娇");
//
//	Proxy* daili = new Proxy(jiaojiao);
//
//	daili->GiveDolls();
//	daili->GiveFlowers();
//	daili->GiveChocolate();
//
//	delete jiaojiao;
//	jiaojiao = NULL;
//	delete daili;
//	daili = NULL;
//	system("pause");
//}

//-------------------代理------------------------------

#include "Composite.h"
#include <iostream>
#include <string>
#include <cstdlib>


void main()
{
	Company* root = new ConcreteCompany("北京总公司");
	root->Add(new HRDepartment("总公司人力资源管理部"));
	root->Add(new FinanceDepartment("总公司财务处"));

	Company* comp = new ConcreteCompany("上海华东分公司");
	comp->Add(new HRDepartment("华东分公司人力资源部"));
	comp->Add(new FinanceDepartment("华东分公司财务处"));

	root->Add(comp);

	Company* comp1 = new ConcreteCompany("南京办事处");
	comp1->Add(new HRDepartment("南京办事处人力资源部"));
	comp1->Add(new FinanceDepartment("南京办事处财务部"));

	root->Add(comp1);

	Company* comp2 = new ConcreteCompany("杭州办事处");
	comp2->Add(new HRDepartment("杭州办事处人力资源部"));
	comp2->Add(new FinanceDepartment("杭州办事处财务处"));

	comp->Add(comp2);

	std::cout << "结构图：" << std::endl << std::endl;
	root->Display(1);

	std::cout << std::endl << "职责：" << std::endl << std::endl;
	root->LineOfDuty();

	delete root;
	system("pause");
}