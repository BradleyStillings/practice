/* ***** Parked Car Class ****
Shows A car's information

*/
#ifndef ParkedCar_H
#define ParkedCar_H

#include<string>

class ParkedCar
{
	public:
	ParkedCar();
	ParkedCar(string carMake, string carModel, string carColor, string carLicense, int carmin_parked)
	int min_Parked() const;
	string display();
	
	private:
	string car_Make;
	car_Model;
	car_Color;
	car_License;
	min_Parked;
};
#endif



