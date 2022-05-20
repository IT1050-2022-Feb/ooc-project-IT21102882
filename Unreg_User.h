#pragma once
#include "Vehicle.h"
class Unreg_User
{
protected:
	int userID;
	char userName[20];
	char userAddress[30];
	char userEmail[30];
	char userphoneNumber[10];
public:
	Unreg_User();
	Unreg_User(int puserid, const char puserName[], const char
		puserAddress[], const char puserEmail[], const char userPHno[]);
	void registerUser();
	virtual void displayDetails();
	~Unreg_User();
};

