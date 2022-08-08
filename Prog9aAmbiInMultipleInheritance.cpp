//PROGRAM-9a
//Program to demonstrate the concept of Ambiguity in MULTIPLE INHERITANCE
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class base1
{
	protected:
		int x;
		public:
			void read()
			{
				cout<<"enter value of x : ";
				cin>>x;
			}
			void show()
			{
				cout<<"x = "<<x;
			}
};
class base2
{
	protected:
		int y;
		public:
			virtual void read()
			{
				cout<<"enter value of y : ";
				cin>>y;
			}
			virtual void show()
			{
				cout<<"\ny = "<<y;
			}
};
class der :  public base1//try variant like changing public for base 2 to private and protected
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
	
	d1.read();	//calling readx() of base1
	d1.read();	//calling ready() of base2
	
	d1.add();	//calling add() of der
	
	d1.show();	//calling showx() of base1
	d1.show();	//calling showy() of base2
	
	d1.show();	//calling showz() of der
	
	getch();
	return 0;
}


