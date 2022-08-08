//Program to demonstrate the VIRTUAL FUNCTION (POINTER TO DERIVED CLASS OBJECTS)
//Organized By: Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class base
{
	public:
		virtual void display()
		{
			cout<<"base";
		}	
};

class derv1 : public base
{
	public:
	//	void display()
	//	{
	//		cout<<"Derv1's display called\n";
	//	}//
};

class derv2 : public base
{
	public:
		void display()
		{
			cout<<"Derv2's display called\n";
		}
};

int main()
{
	base *ptr;	//pointer to base class
	derv1 d1;	//Derived (derv1) object
	derv2 d2;
	ptr=&d1;	//Address of d1 to base pointer
	ptr->display();
	
	ptr=&d2;	//Address of d2 to base pointer
	ptr->display();
	getch();
	return 0;
}


