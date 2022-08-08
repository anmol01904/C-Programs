//PROGRAM-2
//Program for showing pointer's basics
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i, *ptr;
	i=500;
	ptr = &i;
	
	cout<<"\nValue = "<<*ptr;
	
	getch()	;
	return 0;
}
