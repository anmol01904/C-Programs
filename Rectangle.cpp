#include <iostream>
#include<stdio.h>
#include"Shape.h"
using namespace std;
class Rectangle: public Shape
{
	double length;
	double breadth;
	
	public:
	
		double getLength()
		{
		    return length;
		}
		double getBreadth()
		{
		    return breadth;
		}
		void setLength(double length)
		{
		    this->length=length;
		}
		void setWidth(double breadth)
		{
		    this->breadth=breadth;
		}
		double calculatePerimeter()
		{
		    return 2 * (this->getLength() + this->getBreadth());
		}
};

