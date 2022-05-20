#pragma once
#include"Payment.h"
#define SIZE 2
	class Subcription {
	private:
		char PlanID[10];
		char PlanDate[20];
		char PlanDescription[50];
		double PlanPrice;
		int count = 0;
		Payment* payment[SIZE];
	public:
		Subcription();
		Subcription(const char pplanID[], const char pplanDate[], const
			char pplanDescription[], double pplanPrice, int pay1, int pay2);
		void calculatePlanPrice(int id, char pType[], double pAmt);
		void displayPlanPrice();
		void addSubcription();
		~Subcription();
	};

