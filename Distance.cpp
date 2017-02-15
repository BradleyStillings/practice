//Distance Traveled 
#include <iostream>

using namespace std;

int main()
{
	float distance;
	float velocity;
	int time;
	
	cout << "What is the velocity of the vehicle? ";
	cin >> velocity;
	
	while (velocity <= 0)
	{
		cout << "velocity must be greater than 0";
		cin >> velocity;	
	}
	cout << "How long did it travel?";
	cin >> time;
	
	while (time < 1)
	{
		cout << "Time must be greater than 0. Please enter time again: ";
		cin >> time;
	}
	
	cout << "\nHour\tDistance Traveled\n";
	cout << "----------------------------\n";
	for (int i = 1; i <= time; i++)
	{
		distance = velocity * i;
		cout << i << "\t\t" << distance <<endl;
	}
	
	
	return 0;
	
	
	
	
	
}
