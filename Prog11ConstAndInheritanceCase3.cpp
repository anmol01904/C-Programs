//PROGRAM-11 CASE-3
//Program to demonstrate the concept of CONSTRUCTOR AND INHERITANCE
//Parameterized constrcutors in both the base and derived classes
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class base
{
	
	int a;
	public:
		base(int a1)
		{
			a=a1;
			cout<<"\nbase's single parameter constructor";
		}
void show()
{
	cout<<"\na = "<<a;
}
};
class derv : public base
{
	int b;
	public:
		derv(int bb,int aa):base(aa)
		{
			b=bb;
			cout<<"\nderived's two parameter constructor";
		}
		void show()
		{
			base::show();
			cout<<" b = "<<b;
		}
};
int main()
{
	derv d(10,20);
	d.show();
	getch();
	return 0;
}
