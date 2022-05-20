#include "Payment.h"
#include "Subcription.h"
#include<cstring>
#pragma warning(disable : 4996)
Subcription::Subcription()
{
	strcpy(PlanID, "");
	strcpy(PlanDate, "");
	strcpy(PlanDescription, "");
	PlanPrice = 0;
}
Subcription::Subcription(const char pplanID[], const char pplanDate[], const char pplanDescription[], double pplanPrice, int pay1, int pay2)
{
	strcpy(PlanID, pplanID);
	strcpy(PlanDate, pplanDate);
	strcpy(PlanDescription, pplanDescription);
	PlanPrice = 0;
}
void Subcription::calculatePlanPrice(int id, char pType[], double pAmt)
{
	if (count < SIZE)
	{
		payment[count] = new Payment(id, pType, pAmt);
		count++;
	}
}
void Subcription::displayPlanPrice()
{ }
void Subcription::addSubcription()
{ }
Subcription::~Subcription()
{
	//Destructor
	for (int i = 0; i < SIZE; i++)
	{
		delete payment[i];
	}
}


