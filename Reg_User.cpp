#include "Reg_User.h"
#include <cstring>
#pragma warning(disable : 4996)
Reg_User::Reg_User()
{
	strcpy(userUsername, "");
	strcpy(userPassword, "");
}
Reg_User::Reg_User(const char puserUsername[],
	const char puserPassword[], int puserid, const char puserName[],
	const char puserAddress[], const char puserEmail[], const char
	puserNo[]) : Unreg_User(puserid, puserName, puserAddress, puserEmail,
		puserNo)
{
	strcpy(userUsername, puserUsername);
	strcpy(userPassword, puserPassword);
}
void Reg_User::displayDetails()
{ }
void Reg_User::login()
{ }
void Reg_User::logout()
{ }
char Reg_User::checkLoginDetails()
{
	return 0;
}
Reg_User::~Reg_User()
{
	//Destructor
}
