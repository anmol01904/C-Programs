//PROGRAM-11 CASE-1
//Program to demonstrate the concept of CONSTRUCTOR AND INHERITANCE
//No argument constructor in both BASE and DERIVED classes
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
	public:
		derv()
		{
			cout<<"\nderive's no parameter constructor";
		}
};

int main()
{
	derv d;
	
	getch();
	return 0;
}
