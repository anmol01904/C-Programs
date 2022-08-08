#include<iostream>
#include<stdio.h>
#include<string>
#include "Card.h"
using namespace std;
class VISACard : public Card
{
	public:	
		double computeRewardPoints(double amnt)
		{
			double points = this->getRewardPoints() + (0.01 * amnt);
			this->setRewardPoints(points);
		}

};

