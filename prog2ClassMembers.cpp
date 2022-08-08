//PROGRAM-2
//DEFINING MEMBER FUNCTIONS
//Program to calculate are of rectangle by defining member functions outside the class
//Organized by : Dr Vinay Arora

#include <iostream>
#include <conio.h>
using namespace std;

class rectangle
{
	private:
		int a,b;
	public:
		void setdata (int x, int y); 	//member function declaration
		void area(); 					//member function declaration
};
//Q: If public gets converted to private-what will happen

void rectangle::setdata(int x, int y)	//member function definition
	{
		a=x;
		b=y;
	}
void rectangle::area()				//member function definition
	{
		int ar=a*b;
		cout<<"\nArea of rectangle = "<<ar;
	}

int main()
{
	//clrscr();
	rectangle r1, r2; //Object definition
	
	r1.setdata(2,10); //Object r1 calls setdata()
	cout<<"Rectangle 1";
	r1.area();
	
	r2.setdata(100,2); //Object r2 calls setdata()
	cout<<"\nRectangle 2";
	r2.area();
	getch();
	return 0;
}
		
		
