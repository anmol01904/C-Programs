#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Ticket.h"
using namespace std;
class GoldCategory: public Ticket
{
	double ticketCost = 150.0;
	public:	
		void calculateCost(int noOfTickets){
			double totalCost = ticketCost * noOfTickets;
			printf("Total Booking cost for gold category is Rs.%.2lf\n", totalCost);
		}
};


