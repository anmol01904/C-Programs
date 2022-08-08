#include <iostream>
#include<stdio.h>
#include"Shape.h"
using namespace std;
class Square: public Shape
{
	double length;
	public:
		
		double getLength()
		{
		    return length;
		}
		void setLength(double length)
		{
		    this->length=length;
		}
		double calculatePerimeter()
		{
		   return 4 * this->getLength();
		}

};

