#include "Vehicle.h"
#include "Subcription.h"
#include "Reg_User.h"
#define SIZE1 2
#define SIZE2 2
Vehicle::Vehicle()
{ }
Vehicle::Vehicle(int plan1, int plan2, Admin_Panel* padmin, Reg_User* ruserid)
{
	plan[0] = new Subcription (plan1);
	plan[1] = new Subcription (plan2);
	admin_panel = padmin;
	reg_user = ruserid;
}
void Vehicle::vehicleDetails(int vID, const char vOwner, Admin_Panel* pstaff)
{ }
void Vehicle::deleteVehicleDetails()
{ }
void Vehicle::updateVehicleDetails()
{ }
void Vehicle::displayvhlDetails()
{ }
void Vehicle::checkAvailability()
{ }
Vehicle::~Vehicle()
{
	//Destructor
	for (int i = 0; i < SIZE1; i++)
	{
		delete plan[i];
	}

}
