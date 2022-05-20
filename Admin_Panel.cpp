#pragma warning(disable : 4996)
#include "Admin_Panel.h"
#include "Vehicle.h"
#include<cstring>
#define SIZE 2
Admin_Panel::Admin_Panel()
{
	adminID = 0;
	strcpy(adminName, "");
	strcpy(adminEmail, "");
	strcpy(adminNumber, "0000000000");
	strcpy(adminUsername, "");
	strcpy(adminPassword, "");
}
Admin_Panel::Admin_Panel(int padminID, const char padminName[], const char
	padminEmail[], const char padminNumber[], const char
	padminUsername[], const char padminPassword[])
{
	adminID = padminID;
	strcpy(adminName, padminName);
	strcpy(adminEmail, padminEmail);
	strcpy(adminNumber, padminNumber);
	strcpy(adminUsername, padminUsername);
	strcpy(adminPassword, padminPassword);
}
void Admin_Panel::login(const char admUsername, const char admPsword)
{ }
void Admin_Panel::manage(Vehicle* pvhl)
{ }
Admin_Panel::~Admin_Panel()
{
	//Destructor
	for (int i = 0; i < SIZE; i++)
	{
		delete vhl[i];
	}
}
