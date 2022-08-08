//PROGRAM-13
//CONSTRUCTOR
//Program to illustrate the use of constructor member function to initialize an object during its creation.
//Organized by : Dr Vinay Arora

#include<iostream>
#include <conio.h>
using namespace std;

class rectangle
{
	private:
		int length, breadth;
	public:
		
		rect(int x, int y)
		{
			length=x;
			breadth=y;
		}

		int area()
		{
			return(length*breadth);
		}
};

int main()
{
	rectangle r1;
	r1.rect(5,10);
	cout<<"Area of rectangle = "<<r1.area();
	
	getch();
	return 0;
}


