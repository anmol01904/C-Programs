//PROGRAM-4
//ARRAY OF OBJECTS
//Program to demontrate an array of bank account objects
//Organized by : Dr Vinay Arora

#include <iostream>
#include <conio.h>
using namespace std;

class account
{
	private:
		int acc_no;
		char name[15];
		double balance;
	public:
		void input_data();
		void display_data();
};

void account::input_data()
{
	cout<<"\nenter account number, name, balance = ";
	cin>>acc_no>>name>>balance;
}

void account::display_data()
{
	cout<<"\nAccount number =\t"<<acc_no;
	cout<<"\nAccount holder name =\t"<<name;
	cout<<"\nAccount balance =\t"<<balance;
}

int main()
{
	account acc[2];
	int n;
	
	cout<<"\nEnter count of account holders = ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		acc[i].input_data();
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<"\nInformation of account="<<i+1;
		acc[i].display_data();
	}
	getch();
	return 0;
}















