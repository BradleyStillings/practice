//programmar Bradley Stillings
//HOTCOLD.cpp

#include <iostream>
#include <string>
using namespace std;

int main() {
	string subs[4] = {"Ethyl Alcohol","mercury","Oxygen","Water"};
	int freeze[4] = {-173,-38,-362,32};
	int boil[4] = {172,676,-306,212};
	int temp;
	
	cout<<"Input temp: ";
	cin>>temp;
	
	for (int i=0;i<4;i++){
	if (temp<=freeze[i])
	cout<< subs[i] << " will freeze."<<endl;
	if(temp>=boil[i])
	cout<<subs[i]<<" will boil."<<endl;
	}
	return 0;
}

	


