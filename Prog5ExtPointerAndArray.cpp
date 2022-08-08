//PROGRAM-5Extension
//Pointers and ONE-D Array
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[3]={10,20,30};
	int *ptr;
	
	cout<<"\n"<<a;	
	
	ptr=a;
	cout<<"\n"<<ptr;
	
	ptr=&a[0];
	cout<<"\n"<<ptr;
	
	cout<<"\nPrinting vale using * now";
	cout<<"\n"<<*ptr;//to access the value stored at a[0]
	cout<<"\n"<<*a;
	cout<<"\n"<<*(&a[0]);
	cout<<"\n"<<a[0] <<endl;
//	
//	cout<<"\n"<<*(ptr+1);//to access the value stored at a[1]
//	cout<<"\n"<<*(a+1);
//	cout<<"\n"<<*(&a[0]+1);
//	cout<<"\n"<<a[1] <<endl;
//
//	cout<<"\n"<<*(ptr+2);//to access the value stored at a[2]
//	cout<<"\n"<<*(a+2);
//	cout<<"\n"<<*(&a[0]+2);
//	cout<<"\n"<<a[2];

	
	getch()	;
	return 0;
}
