//PROGRAM-8
//Program to demonstrate the concept of MULTIPLE INHERITANCE
//Program demonstrates multiple Inheritance in which a class is derived publicly from both the base classes
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class base1
{
	protected:
		int x;
		public:
			void readx()
			{
				cout<<"enter value of x : ";
				cin>>x;
			}
			void showx()
			{
				cout<<"x = "<<x;
			}
};
class base2
{
	protected:
		int y;
		public:
			void ready()
			{
				cout<<"enter value of y : ";
				cin>>y;
			}
			void showy()
			{
				cout<<"\ny = "<<y;
			}
};
class der : public base1, protected base2 //try variant like changing public for base 2 to private and protected
{
	private:
		int z;
		public:
			void add()
			{
				z=x+y; 
			}
			void showz()
			{
				cout<<"\nz = "<<z;
			}
};
int main()
{
	der d1;
	
	d1.readx();	//calling readx() of base1
	d1.ready();	//calling ready() of base2
	
	d1.add();	//calling add() of der
	
	d1.showx();	//calling showx() of base1
	d1.showy();	//calling showy() of base2
	
	d1.showz();	//calling showz() of der
	
	getch();
	return 0;
}


