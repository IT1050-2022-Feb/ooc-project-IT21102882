#pragma once
#include "Vehicle.h"
#define SIZE 5 
class Admin_Panel
{
private:
	int adminID;
	char adminName[20];
	char adminEmail[20];
	char adminNumber[10];
	char adminUsername[20];
	char adminPassword[20];

	Vehicle* vhl[SIZE];
public:
	Admin_Panel();
	Admin_Panel(int padminID, const char padminName[], const char
		padminEmail[], const char padminNumber[], const char
		padminUsername[], const char padminPassword[]);
	void login(const char admUsername, const char admPsword);
	void manage(Vehicle* pvhl);
	~Admin_Panel();
};

