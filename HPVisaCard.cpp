#include<iostream>
#include<stdio.h>
#include<string>
#include "Card.h"
using namespace std;
class HPVISACard: public Card
{
public:
	double computeRewardPoints(double amnt)
	{
		double points = this->getRewardPoints() + (0.01 * amnt);
		
		string purpose;
		cout<<"Enter purpose of transaction"<<endl;	
		cin>>purpose;
		
		if(purpose == "fuel") {
			points += 10;
		} 
		this->setRewardPoints(points);
	}
};

