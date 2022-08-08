//PROGRAM-4
//Program to demonstrate the concept of PROTECTED INHERITANCE MEMBERS
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class num
{
		protected:
			int x,y;
		public:
			void read()
			{
				cout<<"enter two numbers=";
				cin>>x>>y;
			}
			void showxy()
			{
				cout<<"x= "<<x<< "\t y=" <<y;
			}
};
class result : public num
{
	private:
		int z;
	public:
		void add()
		{
			z=x+y;	//accessing base class protected data members
		}
		void showz()
		{
			cout<<"\nz = "<<z;
		}
};

int main()
	{
		result r1;
		
//		r1.read();
//		r1.add();
//		r1.showxy();
//		r1.showz();
	
		r1.x=10; //generates error as base's protected member not accessible
		
		return 0;
	}


