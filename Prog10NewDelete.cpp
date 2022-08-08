//program to allocate and deallocate memory dynamically

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

	float *ptr=new float;

	*ptr=10.5;

	cout<<*ptr;
	cout<<endl;

	delete ptr;	//Try accessing the value of/reatined in ptr now
	
	getch();
	return 0;	

}
