//PROGRAM-3
//Program for showing pointer's basics
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i=5, j=2, *ptr;
	ptr = &i;
	
	cout<<"\nAddress of i= "<<&i;
	cout<<"\nValue stored in ptr= "<<ptr;
	cout<<"\nValue pointed by ptr= "<<*ptr;
	
	*ptr=10;
	cout<<"\nValue of i= "<<i;
	j=*ptr;
	cout<<"\nValue of j= "<<j;
	
	getch()	;
	return 0;
}
