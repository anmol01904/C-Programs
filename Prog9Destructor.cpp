//program to trace the flow of execution of destructor in a class

#include<iostream>

using namespace std;

class counter
{
	int id;
	public:
	counter(int i)
	{
		id=i;
		cout<<"\nconstructor of object with id"<<id<<"runs";
	}
	
	~counter()
	{
		cout<<"\nobject with Id"<<id<<"destroyed";
	}
};

int main()
{
	counter c1(1);
	counter c2(2);
	counter c3(3);
	
	cout<<"\nEnd of main";
	
	return 0;
}
