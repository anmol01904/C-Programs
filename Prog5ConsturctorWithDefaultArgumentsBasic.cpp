//CONSTRUCTOR WITH DEFAULT ARGUMENTS
//Program for adding two complex numbers to illustrate the concept of constructors with default arguments

#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
	private:
		double real;
		double imag;
	public:
		complex(double x=0.0, double y=0.0)
	{
	real =x;
	imag =y;
	}
		void show();
};
void complex :: show()
{
	if (imag>0)
		cout<<real<<"+"<<imag<<"i"<<endl;
	else
		cout<<real<<imag<<"i"<<endl;
}
int main()
{
	complex c1 (6,8);
	complex c2 (5);
	complex c3;
	
	c3.show();
	
	getch();
	return 0;
	
}
