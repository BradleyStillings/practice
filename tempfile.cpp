//tempfile.cpp
//create a program to create a file (write) containing a termperature conversion chart for 0 100 degrees
//celsius at 10 degree intervals and the corresponding Fahrenheit Temperature 

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int Celsius = 0;
	int Fahrenheit;
	cout<<"Programmer Bradley Stillings:" <<endl;
	cout<<endl;
	cout<<"This program creates a file containg a temperature conversion chart for 0 to 100 degrees at 10 intervals" <<endl;	//start portion
	cout<<endl;
	
	

	
	cout<<"Temperature Conversion Chart"<<endl;				//main portion procedure 
	cout<<endl;
	cout<<"Celsius \tFahrenheit "<<endl;
	cout<<endl;
	

	while (Celsius <= 100)
	{
		Fahrenheit = (((Celsius*9)/5)+32); //conversion of the Celsius to Fahrenheit
		cout << "  "<< Celsius << "  |     " << Fahrenheit << endl;  //both variables output on line
		Celsius = Celsius + 10; // adds Celsius 10	
	
	};
	ofstream tempfile2;
	tempfile2.open("tempfile.txt");				//output to external text file.
	tempfile2 << "Temperature chart. \n";
	tempfile2 << " Celsius,Fahrenheit. \n";
		tempfile2.close();
	system("PAUSE");
	return 0;
}


