#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[5]={10,20,30,40,50};
	int *ptr;
	
//	cout<<"\n"<<a;		//Address of starting of array a[]
//	cout<<"\n"<<ptr;	//Garbage value
	
//	ptr = a;
	
//	cout<<"\n"<<ptr;	//Not Garbage now; give value same as variable 'a'
	
//	ptr = ptr + 2;
	
//	cout<<"\n"<<ptr;	//Now ptr was pointing to address of 1st element; after giving increment of 2
						//This will now point to 3rd element or having the address of 3rd element
	//cout<<"\n"<<*ptr;	//This will now give the value at the address pointed by 'ptr', which is 3rd element 
						//of an array.
	
	int *ptr1, *ptr2, x;
	ptr1=a;
	ptr2=a+3;
	
	x=ptr2-ptr1;		//This will give the number of elements present between address of ptr2 and ptr1
	cout<<"\n"<<x;	
	
	
	
	getch()	;
	return 0;
}
