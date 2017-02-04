//sales.cpp
//averages a week's widget sales (6 days)
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 6;							//size of array
	double sales[SIZE];							//array of 6 variables
	
	cout << "Enter widget sales for 6 days\n";
	for(int i = 0; i<SIZE; i++)					//put figures in array
	cin >>sales[i];
	
	double total = 0;
	int i;
	for (i = 0; i<SIZE; i++)					//read figures from array
	total +=sales[i];							//to find total
	double average = total / SIZE; 				//find average 
	cout << "Average = " << average << endl;
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	

