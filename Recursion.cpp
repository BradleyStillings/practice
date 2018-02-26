/*Recursion

Programmar: Bradley Stillings*/
#include<iostream>
#include<string>

using namespace std;

int fibonacci(int f)
{
if(f == 0)
return 0;
if (f == 1 || f == 2)
{
return 1;
}
else
{
return fibonacci(f-1)+fibonacci(f-2);
}
}

int main()
{
	int f;
	int i= 0;	
	cout << "Input the amount of numbers for the series:";			// integer declaration
	cin >> f;
	cout <<" The Series is: ";
	for(int i=1;i<=f;i++)
	{
		cout << fibonacci(i) << " ";
	}
	return 0;
	
}


