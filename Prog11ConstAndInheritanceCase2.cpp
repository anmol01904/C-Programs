//PROGRAM-11 CASE-2
//Program to demonstrate the concept of CONSTRUCTOR AND INHERITANCE
//No parameter in BASE class and parameterized constructor in DERIVED class
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class base
{
	public:
		base()
		{
			cout<<"\nbase's no parameter constructor";
		}
};
class derv : public base
{
	int a,b;
	public:
		derv(int x,int y)
		{
			a=x;b=y;
			cout<<"\nderive's constructor with two parameters";
		}
};
int main()
{
	derv d(10,15);
	getch();
	return 0;
}
