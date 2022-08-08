#include <iostream>
#include <string>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Bank.h"
#include"ProcessCash.cpp"
using namespace std;
int main()
{
	double balance;
    cout<<"Enter the initial balance"<<endl;
    cin>>balance;
    
    ProcessCash account;
    account.setBalance(balance);
    
    string choice;
    
    do 
	{
	    int opChoice;
	    cout<<"Select the operation:"<<endl;
	    cout<<"1.Cash deposit"<<endl;
	    cout<<"2.Cash withdraw"<<endl;
	    cout<<"3.Check balance"<<endl;
	    cin>>opChoice;
	    
	    switch(opChoice) {
	    	case 1:
	    		double deposit;
	    		cout<<"Enter the cash to be deposited"<<endl;
	    		cin>>deposit;
	    		account.deposit(deposit);
	    		break;
	    	case 2:
				double debit;
				cout<<"Enter the cash to be withdrawn"<<endl;
				cin>>debit;
				account.withdraw(debit);
				break;
			case 3:
				account.checkBalance();
				break;
			default:
				cout<<"Invalid Choice"<<endl;
				break;
		}
		
		cout<<"Do you want to do more transaction?(yes/no)"<<endl;
		cin>>choice;
	}
	while (choice == "yes");
}

