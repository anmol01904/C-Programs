#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Bank.h"
using namespace std;
class ProcessCash: public Bank
{
	private:
		double balance;
	
	public:
		void setBalance(double balance){
			this->balance = balance;
		}
		double getBalance(){
			return balance;
		}
		void deposit(double cash){
			setBalance(getBalance() + cash);
			cout<<"Cash deposited. Total balance is "<<getBalance()<<endl;
		}
		void withdraw(double cash){
			if ((getBalance() - cash) >= 0) {
				setBalance(getBalance() - cash);
				cout<<"Cash withdrawn. Available balance is "<<getBalance()<<endl;
			}
			else {
				cout<<"Cannot process. Available balance is "<<getBalance()<<endl;
			}	
		}
		void checkBalance(){
			cout<<"Available balance in your account is "<<getBalance()<<endl;
		}
};


