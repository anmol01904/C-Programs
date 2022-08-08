#include <iostream>
#include<stdio.h>
#include"Shape.h"
using namespace std;
class Circle: public Shape
{
	double radius;
	public:
	
		double getRadius()
		{
		  return radius;
		}
		void setRadius(double radius)
		{
		    this->radius=radius;
		}
		double calculatePerimeter()
		{
			return 2 * 3.14 * this->getRadius();
		}

};

