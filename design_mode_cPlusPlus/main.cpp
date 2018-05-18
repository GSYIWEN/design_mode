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
//	//�����շ�  
//	CashContext* cc1 = NULL;
//	cc1 = new CashContext(1);
//	totalPrices = cc1->GetResult(300);
//	total += totalPrices;
//	std::cout << "Type:�����շ�  totalPrices:" << totalPrices << "  total:" << total << std::endl;
//	totalPrices = 0;
//
//	//��������  
//	CashContext* cc2 = NULL;
//	cc2 = new CashContext(2);
//	totalPrices = cc2->GetResult(700);
//	total += totalPrices;
//	std::cout << "Type:��300��100  totalPrices:" << totalPrices << "  total:" << total << std::endl;
//	totalPrices = 0;
//
//	//��������  
//	CashContext* cc3 = NULL;
//	cc3 = new CashContext(3);
//	totalPrices = cc3->GetResult(300);
//	total += totalPrices;
//	std::cout << "Type:��8��  totalPrices:" << totalPrices << "  total:" << total << std::endl;
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


//-------------------װ��----------------------------

//#include "Finery.h"
//#include <string>
//#include <iostream>
//
//
//void main()
//{
//	Person* xc = NULL;
//	xc = new Person("С��");
//
//	std::cout << "��һ��װ��: " << std::endl;
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
//	std::cout << "�ڶ���װ�磺" << std::endl;
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


//-------------------װ��----------------------------


//-------------------����------------------------------

//#include "Proxy.h"  
//#include <iostream>  
//#include <stdlib.h>  
//
////Client���ͻ���  
//void main()
//{
//	SchoolGirl* jiaojiao = new SchoolGirl();
//	jiaojiao->setName("���");
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

//-------------------����------------------------------

#include "Composite.h"
#include <iostream>
#include <string>
#include <cstdlib>


void main()
{
	Company* root = new ConcreteCompany("�����ܹ�˾");
	root->Add(new HRDepartment("�ܹ�˾������Դ����"));
	root->Add(new FinanceDepartment("�ܹ�˾����"));

	Company* comp = new ConcreteCompany("�Ϻ������ֹ�˾");
	comp->Add(new HRDepartment("�����ֹ�˾������Դ��"));
	comp->Add(new FinanceDepartment("�����ֹ�˾����"));

	root->Add(comp);

	Company* comp1 = new ConcreteCompany("�Ͼ����´�");
	comp1->Add(new HRDepartment("�Ͼ����´�������Դ��"));
	comp1->Add(new FinanceDepartment("�Ͼ����´�����"));

	root->Add(comp1);

	Company* comp2 = new ConcreteCompany("���ݰ��´�");
	comp2->Add(new HRDepartment("���ݰ��´�������Դ��"));
	comp2->Add(new FinanceDepartment("���ݰ��´�����"));

	comp->Add(comp2);

	std::cout << "�ṹͼ��" << std::endl << std::endl;
	root->Display(1);

	std::cout << std::endl << "ְ��" << std::endl << std::endl;
	root->LineOfDuty();

	delete root;
	system("pause");
}