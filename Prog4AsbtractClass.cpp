//Program to demonstrate the ABSTRACT CLASS
//Organized By: Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class shape
{
	protected:
		double a, b;					//dimensions of shape
	public:
		void read()
		{
			cin>>a>>b;
		}
		virtual void cal_area()	= 0;	//Pure virtual function
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
	shape *ptr[2];						//pointer to 'shape' class

	rectangle r1;
	cout<<"\nEnter length and breadth of rectangle : ";
	r1.read();
	
	triangle t1;
	cout<<"\nEnter base and perpendicular of triangle : ";
	t1.read();
	
	ptr[0]=&r1;
	ptr[1]=&t1;
	
	for(int i=0; i<2; i++)
		ptr[i]->cal_area();
	
	getch();
	
	return 0;
}
