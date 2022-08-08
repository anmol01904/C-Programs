//PROGRAM-12
//Program to demonstrate the concept of DESTRUCTORS AND INHERITANCE
//Program to illustrate the order of execution of constructor and destructor while handling objects of
//derived classes
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class base1
{
	public:
		base1()
		{
			cout<<"base1's no parameter constrcutor";
		}
		~base1()
		{
			cout<"\nDestructor of base1";
		}
};
class base2
{
	public:
		base2()
		{
			cout<<"\nbase2's no parameter constrcutor";
	}
		~base2()
		{
			cout<"\nDestructor of base2";
		}
};
class derv : public base1, public base2
{
	public:
		derv()
		{
			cout<<"\nDerv's no parameter constructor";
		}
		~derv()
		{
			cout<<"\nDestructor of derv";
		}
};

int main()
{

	base2 b1;
	
	return 0;
}
