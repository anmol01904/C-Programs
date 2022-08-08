#include<iostream>
#include<stdio.h>
#include<string>
#include<list>
#include<iterator>
#include "VISACard.cpp"
#include "HPVisaCard.cpp"
using namespace std;
int main(){
	int n,i;
	string cardType, accountNumber, cardNumber;
	double points, amount;
	cout<<"Enter number of transactions\n";
	cin>>n;
	
	Card** card = new Card*[n];
	for (i = 0; i < n; i++) {
		card[i] = NULL;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter card type Visa or HPVisa"<<endl;
		cin>>cardType;
		
		if (cardType == "Visa") {
			card[i] = new VISACard();
		}
		else if (cardType == "HPVisa") {
			card[i] = new HPVISACard();
		}
		else {
			cout<<"Sorry no reward points for other type of cards"<<endl;
			continue;
		}
		
		card[i]->setCardType(cardType);
		cout<<"Enter card number"<<endl;
		cin>>cardNumber;
		card[i]->setCardNumber(cardNumber);
		cout<<"Enter account number"<<endl;
		cin>>accountNumber;
		card[i]->setAccountNumber(accountNumber);
		cout<<"Enter reward points"<<endl;
		cin>>points;
		card[i]->setRewardPoints(points);
		cout<<"Enter transaction amount"<<endl;
		cin>>amount;
		
		card[i]->computeRewardPoints(amount);  
	}
	
	bool printDetails = false;
	
	for (i = 0; i < n; i++) {
		if (!(card[i] == NULL)) {
			printDetails = true;
		}
	}
	
	if (printDetails) {
		printf("%-25s%-25s%-25s%-40s\n","Account Number","Card Number","Card Type","Reward Points");
		for (i = 0; i < n; i++) {
			if (card[i] == NULL) {
				continue;
			}
			printf(
				"%-25s%-25s%-25s%-40.2lf\n", 
				card[i]->getAccountNumber().c_str(), 
				card[i]->getCardNumber().c_str(),
				card[i]->getCardType().c_str(),
				card[i]->getRewardPoints()
			);
		}
	}
	
	
	for (i = 0; i < n; i++) {
		delete card[i];
	}
	return 0;
}

