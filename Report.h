#pragma once
#include "Subcription.h"
#include"Payment.h"
#define SIZE1 5
#define SIZE2 5
#define SIZE3 5
	class Report
	{
	private:
		Subcription* plan[SIZE1];
		Payment* pay[SIZE3];
	public:
		Report();
		Report(Subcription* pbbok[], Payment* ppay[]);
		void planingDetailsReport();
		void paymentDetailsReport();
		~Report();
	};

