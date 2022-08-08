#include <iostream>
#include <string>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Ticket.h"
#include"GoldCategory.cpp"
#include"SilverCategory.cpp"
#include"PlatinumCategory.cpp"
using namespace std;
int main()
{
	int noOfTickets;
    cout<<"Enter the no. of tickets to book"<<endl;
    cin>>noOfTickets;
    
    int category;
    cout<<"Select the category:"<<endl;
    cout<<"1.Platinum"<<endl;
    cout<<"2.Gold"<<endl;
    cout<<"3.Silver"<<endl;
    cin>>category;
    
    Ticket* ticket;
    
    switch (category) {
    	case 1:
    		ticket = new PlatinumCategory();
    		break;
    	case 2:
			ticket = new GoldCategory();
			break;
		case 3:
			ticket = new SilverCategory();
			break;
		default:
			cout<<"Invalid Choice"<<endl;
			break;					
	}
	
	ticket->calculateCost(noOfTickets);
	return 0;    
}


