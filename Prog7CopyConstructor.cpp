//COPY CONSTRUCTOR

#include<iostream>
#include<conio.h>

using namespace std;

class counter
{
	int count;
	
	public:
		counter(int c)//single parameter constructor
		{
			count = c;
		}
		
		counter(counter &c1)//copy constructor
		{
			cout<<"\nCopy constructor invoked";
			count = c1.count;
		}
		
		void show()
		{
			cout<<"\ncount = "<<count;
		}
};

int main()
{
	counter c1(10);
	counter c2(c1);//call copy constructor
	
	c1.show();
	c2.show();
	
	getch();
	return 0;
}
