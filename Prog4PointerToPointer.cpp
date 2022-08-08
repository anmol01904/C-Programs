//PROGRAM-4
//Program to show how pointer to pointer operates.
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i=100, *j, **k;
	j = &i;
	k = &j;
	
	cout<<"\nValue of i= "<<i;
	cout<<"\nValue of *j= "<<*j;
	cout<<"\nValue of **k=  "<<*k;
	
	getch()	;
	return 0;
}
