#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{ 
    
    double Price_of_meal;                //variables       
    double tip;
    
    cout << "Enter the price of meal" <<endl;
    cin >> Price_of_meal;                          //input amount
   tip = Price_of_meal * 0.15;

   
    cout << "The tip is " << tip;
   
    return 0;
}
