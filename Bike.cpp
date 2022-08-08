#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Vehicle.h"
using namespace std;
class Bike: public Vehicle
{
	double distance;
	double speed;
	public:	
	void setValues(double distance, double speed)
	{
	    this->distance = distance;
	    this->speed = speed;
	} 
	void displayTimeTaken(){
		printf("Time taken by bike is %.2lf hours\n", distance / speed);
	}
};

