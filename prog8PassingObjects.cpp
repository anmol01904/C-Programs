//PROGRAM-8
//Using Classes - Object as an argument

//In C++ programming language, we can also pass an object as an argument within the member function of class.
//This is useful, when we want to initialize all data members of an object with another object, we can pass 
//objects and assign the values of supplied object to the current object. For complex or large projects, 
//we need to use objects as an argument or parameter.

//Organized by : Dr Vinay Arora

#include <iostream>
using namespace std;

class Demo
{
	private:
		int a, b;

	public:
		void set(int x, int y)
		{
			a = x;
			b = y;
		}

		void sum(Demo ob1, Demo ob2)
		{
			a  = ob1.a + ob2.a;
			b  = ob1.b + ob2.b;
		}

		void print()
		{
			cout<<"Value of A :  "<<a<<endl;
			cout<<"Value of B :  "<<b<<endl;
		}
};

int main()
{
	//object declarations
	Demo d1;
	Demo d2;
	Demo d3;

	//assigning values to the data member of objects
	d1.set(10,100); 
	d2.set(20,200); 

	//passing object d1 and d2
	d3.sum(d1,d2);
	
	//printing the values
	d1.print();
	d2.print();
	d3.print();

	return 0;
}

