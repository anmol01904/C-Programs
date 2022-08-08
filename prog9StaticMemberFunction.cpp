//PROGRAM-9
//STATIC MEMBER FUNCTION
//Program to demontrate static data member (rate of interest) with an array of bank account objects

//If the bank decides to changes the RATE OF INTEREST for all its customers then we need to make a
//functionin the class that update it

//Organized by : Dr Vinay Arora

#include <iostream>
#include <conio.h>
using namespace std;

class account
{
	private:
		int acc_no;
		double balance;
		static double rate;
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
		
		void qtr_rate_cal()
		{
			double interest = balance*rate;
			balance=balance+interest;
		}
		
		static void modify_rate(double incr)
		{
			rate = rate + incr; //modifying rate
			cout<<"\n Modified Rate of Interest = "<<rate;
		}
};

double account::rate=5; //static data member defination
		
int main()
{
	account a1, a2;
	cout<<"enter customer 1 information...\n";
	a1.read();
	cout<<"\nenter customer 2 information...\n";
	a2.read();	
	
	 account::modify_rate(2); //Calling static member function
	
	a1.qtr_rate_cal();
	a2.qtr_rate_cal();
	
	a1.show();
	a2.show();
	
	getch();
	return 0;
}		
