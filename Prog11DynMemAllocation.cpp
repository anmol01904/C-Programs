//Program to compute average of n numbers of an array by allocating memory dynamically

#include<iostream>
#include<conio.h>
#include<process.h>

using namespace std;

int main()
{
	int *p;
	int n,sum=0;

	cout<<"Enter how many elements=";
	cin>>n;

	p=new int[n];

	for(int i=0;i<n;i++)
	{
		cout<<"Enter value :"<<i+1<<"=";
		cin>>*(p+i);
		sum=sum+*(p+i);
	}

	float avg=float(sum)/n;
	cout<<"Avg of given value ="<<avg;

	delete[] p;
	return 0;
}
