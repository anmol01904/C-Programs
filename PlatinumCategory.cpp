#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Ticket.h"
using namespace std;
class PlatinumCategory: public Ticket
{
    double ticketCost = 200.0;
	public:	
		void calculateCost(int noOfTickets){
			double totalCost = ticketCost * noOfTickets;
			printf("Total Booking cost for platinum category is Rs.%.2lf\n", totalCost); 
		}
};


