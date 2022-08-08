#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Bike.cpp"
#include"Bus.cpp"
#include"Car.cpp"
using namespace std;
void setAndDisplay(Vehicle* pointer, double distance, double speed) {
   	pointer->setValues(distance, speed);
   	pointer->displayTimeTaken();
}
int main()
{
    double distance, bikeSpeed, busSpeed, carSpeed;
    cout<<"Enter the total distance in km"<<endl;
    cin>>distance;
    cout<<"Enter the speed of the bike in km/hr"<<endl;
    cin>>bikeSpeed;
    cout<<"Enter the speed of the bus in km/hr"<<endl;
    cin>>busSpeed;
    cout<<"Enter the speed of the car in km/hr"<<endl;
    cin>>carSpeed;
	
	Vehicle* v = new Bike();
	setAndDisplay(v, distance, bikeSpeed);
	delete v;
	v = new Bus();
	setAndDisplay(v, distance, busSpeed);
	delete v;
	v = new Car();
	setAndDisplay(v, distance, carSpeed);
	return 0;
}

