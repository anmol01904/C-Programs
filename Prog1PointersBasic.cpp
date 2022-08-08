//PROGRAM-1
//Program for showing pointer's basics
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i, *ptr;
	i=5;
	ptr = &i;
	
	cout<<"\nValue of i= "<<i;
	cout<<"\nAddress of i= "<<&i;
	cout<<"\nValue of ptr= "<<ptr;
	
	getch()	;
	return 0;
}

