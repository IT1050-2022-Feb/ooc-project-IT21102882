#pragma once
#pragma warning
#include "Admin_Panel.h"
#include "Subcription.h"
#include "Reg_User.h"
#define SIZE1 2
class Vehicle
{
private:
	int vehicleID;
	char vehicleOwner[50];
	int count = 0;

	Subcription* plan[SIZE1];
	Admin_Panel* admin_panel;
	Reg_User* reg_user;
public:
	Vehicle();
	Vehicle(int plan1, int plan2, Admin_Panel* padmin, Reg_User* ruserid);
	void vehicleDetails(int vhlID, const char vhlOwner, Admin_Panel* padmin);
	void deleteVehicleDetails();
	void updateVehicleDetails();
	void displayvhlDetails();
	void checkAvailability();
	~Vehicle();
};

