#include "Report.h"
Report::Report()
{
	for (int i = 0; i < SIZE1; i++)
	{
		plan[i] = 0;
	}

	for (int k = 0; k < SIZE3; k++)
	{
		pay[k] = 0;
	}
}
Report::Report(Subcription* pplan[], Payment* ppay[])
{
	for (int i = 0; i < SIZE1; i++)
	{
		plan[i] = pplan[i];
	}
	for (int k = 0; k < SIZE3; k++)
	{
		pay[k] = ppay[k];
	}
}
void Report::planingDetailsReport()
{ }
void Report::paymentDetailsReport()
{ }
Report::~Report()
{
	//Destructor
	for (int i = 0; i < SIZE1; i++)
	{
		delete plan[i];
	}
	for (int k = 0; k < SIZE3; k++)
	{
		delete pay[k];
	}
}
