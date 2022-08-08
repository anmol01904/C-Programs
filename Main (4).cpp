#include <iostream>
#include<stdio.h>
#include "Stall.cpp"
using namespace std;
int main()
{
    string stallType;
    stall s;
    double cost;
    int squareFeet,numberOfTv;
    char choice;
    cout<<"Enter the stall type:"<<endl;
    cin>>stallType;
    s.setStallType(stallType);
    cout<<"Enter the size of the stall in square feet:"<<endl;
    cin>>squareFeet;
    s.setSquareFeet(squareFeet);
    cout<<"Does the hall have tv(y/n):"<<endl;
    cin>>choice;
    if(choice=='y')
    {
    	cout<<"Enter the number of tv:"<<endl;
    	cin>>numberOfTv;
    	s.setNumberOfTv(numberOfTv);
    	cost = s.computeCost(stallType, squareFeet, numberOfTv);
    }
    else
    {
       	cost = s.computeCost(stallType, squareFeet);
	}
	
	if (cost > 0) {
		printf("Cost of the stall is %.2lf\n", cost);
	}
	
	return 0;
}

