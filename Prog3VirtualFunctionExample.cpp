 //Program to demonstrate the VIRTUAL FUNCTION
//Consider a collection of shapes in a graphicalpackage and on the basis of a particular shape
//(rectangle, triangle etc.). We calculate area depending upon it dimensions. 

//Create a base class "shape" - that stores dimensions for computing the area of shapes
//Derive two classes "rectangle" and "triangle" publicaly from the base class shape
//The base class shape declare a virtual function called "cal_area()" which is re-defined in the derived class
//for calculating area of specific shape

//Area of rectangle = length * breadth
//Area of triangle = 1/2 * base * perpendicular

//Take length or base as variable "a"
//Take breadth or perpendicular as variable "b"

//Organized By: Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class shape
{
	protected:
		double a, b;				//dimensions of shape
	public:
		void read()
		{
			cin>>a>>b;
		}
		virtual void cal_area()		//virtual function
		{
		}
};
class rectangle : public shape
{
	public:
		void cal_area()
		{
			double area = a*b;
			cout<<"\nArea of rectangle = "<<area;
		}
};

class triangle : public shape
{
	public:
		void cal_area()
		{
			double area = (a*b)/2;
			cout<<"\nArea of triangle = "<<area;
		}
};

int main()
{
	shape *ptr;				//pointer to 'shape' class
	
	
	rectangle r1;
	cout<<"\nEnter length and breadth of rectangle : ";
	r1.read();
	
	ptr = &r1;				//assigning address of r1 to ptr
	ptr->cal_area();		//invoke cal_area of rectangle
	
	
	triangle t1;
	cout<<"\nEnter base and perpendicular of triangle : ";
	t1.read();
	
	ptr=&t1;				//assigning address of t1 to ptr
	ptr->cal_area();		//invoke cal_area of triangle
	
	getch();
	return 0;
}
