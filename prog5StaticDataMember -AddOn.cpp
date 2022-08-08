//PROGRAM-5
//STATIC DATA MEMBERS
//Program to demontrate static data member (rate of interest) with an array of bank account objects
//Organized by : Dr Vinay Arora

#include <iostream>
#include <conio.h>
using namespace std;

class account
{
	private:
		int acc_no;
		double balance;
		double rate;

	public:
		void read()
		{
			cout<<"\nEnter account number, and balance = ";
			cin>>acc_no>>balance;
		}
		
		void show()
		{
			cout<<"\nAccount number = "<<acc_no<<'\t';
			cout<<"Rate of Interest = "<<rate<<'\t';
			cout<<"Balance = "<<balance;
		}
		
		void regarding_rate()
		{
			rate=10;
		}

		void qtr_rate_cal()
		{
			double interest = (balance*rate);
			balance=balance+interest;
		}
};

int main()
{
	account a1, a2;
	cout<<"enter customer 1 information...\n";
	a1.read();

	cout<<"\nenter customer 2 information...\n";
	a2.read();	
	
	a1.regarding_rate();
	a2.regarding_rate();
	
	a1.qtr_rate_cal();
	cout<<"\n";
	a2.qtr_rate_cal();
	
	a1.show();
	a2.show();
	
	getch();
	return 0;
}		
