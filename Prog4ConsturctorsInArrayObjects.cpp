//CONSTRUCTORS IN ARRAY OF OBJECTS
//Program to display the area of multiple rectangles using array of objects in which each object 
//is initialized using constructor

#include<iostream>
#include<conio.h>

using namespace std;

class rectangle
{
	private:
		int length; 
		int breadth;
	public:
		rectangle(int l, int b)
		{
			length = l;
			breadth = b;
		}
		void showarea()
		{
			cout<<"\nArea of rectangle ="<<length*breadth;
		}
};

int main()
{
	rectangle r[3] = {rectangle (5,6), rectangle (7,8), rectangle (5,7)};
	cout<<"Displaying Areas of Rectangles\n";
	
	for(int i=0; i<3; i++)
	{
		r[i].showarea();
	}

return 0;
}
			
