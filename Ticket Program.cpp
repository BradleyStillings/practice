/* Parking Ticket Simulator
For this assignment you will design a set of classes that work together to simulate a police officer issuing a parking ticket. The classes you should design are:
+ The ParkedCar Class: This class should simulate a parked car. The class's responsibilities are: To know the dar's make,model,color,license nnumber and the number of minutes
that the car has been parked.
+ The Parkingmeter ClasS: this class should simulate a parking meter. The Class's only responsibility is:
- To know the number of minutes of parking time that has been purchased.
+ The ParkingTicket Class: This class should simulate a parking ticket. The Class's responsibilities are:
- To report the make,model,color,and license number of the illegally parked car.
- To report the amount of the fine, which is $25 for the first hour or part of an hour that the car is illegally parked, plus $10 for every additional hour or part
of an hour that the car is illegally parked.
- To report the name and badge number of the police number issuing the ticket.
+ The PoliceOfficer Class: This class should simulate a police officer inspecting parked cars. The Class's responsibilities are:
- To know the police officer's name and badge number
- To examine a ParkedCar object and a ParkingMeter object, and determine whether the car's time has expired.
- To issue a parking ticket (generate a ParkingTicket object) if the car's time has expired
Write a program that demonstrates how these classes collaborate. 

 Programmar: Bradley Stillings
*/ 
#include<iostream>
#include<string>
using namespace std;

class ParkedCar {
private:
string car_Make;					// car make
string car_Model;					// car model
string car_Color;					// car color
string car_License;					// license number of parked car
int min_Parked;						// number of minutes parked

public:
ParkedCar()							// default constructor
{
	car_Make = "";
	car_Model = "";
	car_Color = "";
	car_License = "";
	min_Parked = 0;
}

ParkedCar(string carMake, string carModel, string carColor, string carLicense, int carmin_parked)	// constructor
{
	car_Make =
	car_Model =
	car_Color =
	car_License =
	min_Parked = 
}

int min_Parked() const
{
	return min_Parked;
}

void display()			//shows car object details
{
	cout << " Car Name\n" << endl;
	cout << "Car Make\n" << endj;
	cout << "Car Model\n" << endl;
	cout << "Car Color\n" << endl;
	cout << "Vehicle License\n" << endl;	
}		
};


//Parking Meter
class ParkingMeter
{
private:
	int bought_Mins;

public:
ParkingMeter()
{
	bought_Mins = 0;
}	

ParkingMeter(int bought_Mins)
{
	bought_Minsparked = bought_Mins;
}

int bought_Minsparked() const
{
	return bought_Minsparked;
}
void display()
{
	cout << "Meter display\n" << endl;
	cout << "Total minutes bought :" << endl << bought_Minsparked;
}
};
// Parking Ticket
class ParkingTicket
{
	private:
	ParkedCar car;
	ParkingMeter meter;
	int fine;
	
	public:
	ParkingTicket(ParkedCar &carticket, ParkingMeter &meterticket) // constructor 
	{
		car = carticket;
		meter = meterticket;
		fine = amountFine();
	}	
int amountFine()
{
	return 
}
}

