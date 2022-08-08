//PROGRAM-4
//program to demonstrate passing of an object and returning object from a function
//Organized by : Dr Vinay Arora

#include<iostream>
using namespace std;
class Rectangle
	{
		int L,B;
		public:
		Rectangle()
		{
			L = 0;
			B = 0;
		}
	
		Rectangle(int l,int b)
		{
			L = l;
			B = b;
		}
		Rectangle Sum(Rectangle Rec) 
		{
			Rectangle temp;
			temp.L = L + Rec.L;     
			temp.B = B + Rec.B;     
			return temp;
		}
	void Display()
	{
		cout<<"\nLength : "<<L;
		cout<<"\nBreadth : "<<B;
	}
};
	int main()
	{
		Rectangle R1(5,7),R2(2,3),R3;

		cout<<"\n\nValues of Rectangle 1 : ";
		R1.Display();
		cout<<"\n\nValues of Rectangle 2 : ";
		R2.Display();

		R3 = R1.Sum(R2);     

		cout<<"\n\nValues of Rectangle 3 : ";
		R3.Display();

		return 0;
	}

