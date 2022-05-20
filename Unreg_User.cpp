#include "Unreg_User.h"
#include <cstring>
#pragma warning(disable : 4996)
Unreg_User::Unreg_User()
{
	userID = 0;
	strcpy(userName, "");
	strcpy(userAddress, "");
	strcpy(userEmail, "");
	strcpy(userphoneNumber, "0000000000");
}
Unreg_User::Unreg_User(int puserid, const char puserName[], const char
	puserAddress[], const char puserEmail[], const char userPHno[])
{
	userID = puserid;
	strcpy(userName, puserName);
	strcpy(userAddress, puserAddress);
	strcpy(userEmail, puserEmail);
	strcpy(userphoneNumber, userPHno);
}

void Unreg_User::registerUser()
{ }
void Unreg_User::displayDetails()
{ }
Unreg_User::~Unreg_User()
{
	//Destructor
}