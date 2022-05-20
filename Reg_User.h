#pragma once
#include "Unreg_User.h"

class Reg_User :public Unreg_User
{

	protected:
		char userUsername[10];
		char userPassword[10];
	public:
		Reg_User();
		Reg_User(const char puserUsername[], const char
			puserPassword[], int puserid, const char puserName[], const char
			puserAddress[], const char puserEmail[], const char puserNo[]);
		void displayDetails();
		void login();
		void logout();
		char checkLoginDetails();
		~Reg_User();
};