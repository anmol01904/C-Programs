#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Ticket.h"
using namespace std;
class SilverCategory: public Ticket
{
    
	double ticketCost = 100.0;
	public:	
		void calculateCost(int noOfTickets){
			double totalCost = ticketCost * noOfTickets;
			printf("Total Booking cost for silver category is Rs.%.2lf\n", totalCost); 
		}
};


