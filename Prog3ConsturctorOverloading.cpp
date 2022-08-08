//CONSTRUCTOR OVERLOADING

#include<iostream>
#include<conio.h>

using namespace std;

class rectangle
{
	private:
		int length, breadth;
	public:
		rectangle()
		{
			length = breadth=0;
			cout<<"Constructor with zero parameter called\n";
		}
		
		rectangle(int a)
		{
			length = breadth=a;
			cout<<"Constructor with one parameter called\n";			
		}
		
		rectangle(int a, int b)
		{
			length = a;
			breadth = b;
			cout<<"Constructor with two parameters called\n";			
		}
		
		int area()
		{
			return (length*breadth);
		}
};

int main()
{
	rectangle r1;
	rectangle r2(5);
	rectangle r3 (7,8);
	
	cout<<"\nArea of first rectangle = "<<r1.area();
	cout<<"\nArea of square = "<<r2.area();
	cout<<"\nArea of second rectangle = "<<r3.area();
	
	getch();
	return 0;
}

