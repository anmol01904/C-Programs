#include <iostream>
#include "NEFTTransfer.cpp"
#include "IMPSTransfer.cpp"
#include "RTGSTransfer.cpp"
using namespace std;
int main(){
	string accountNumber, time;
	double balance, amount;
	int type;
	NEFTTransfer n;
	IMPSTransfer i;
	RTGSTransfer r;
    cout<<"Enter your account number"<<endl;
    cin>>accountNumber;
    cout<<"Enter the balance of the account"<<endl;
    cin>>balance;
    cout<<"Enter the type of transfer to be made"<<endl;
    cout<<"1.NEFT"<<endl;
    cout<<"2.IMPS"<<endl;
    cout<<"3.RTGS"<<endl;
    cin>>type;
    
    switch(type) {
    	case 1:
    		n.setAccountNumber(accountNumber);
    		n.setBalance(balance);
    		cout<<"Enter the amount to be transferred"<<endl;
    		cin>>amount;
    		cout<<"Enter the current time in the format HH:MM AM/PM"<<endl;
    		cin>>time;
    		if (n.validate(amount)) {
    			if(n.transfer(amount) && n.timeCheck(time)) {
	    			n.setBalance(n.getBalance() - amount);
	    			cout<<"Transfer occurred successfully"<<endl;
	    			printf("Remaining balance is %.2lf\n", n.getBalance());
	    		}
	    		else {
	    			cout<<"Transfer could not be made"<<endl; 
				}
			}
			else {
				cout<<"Account number or transfer amount seems to be wrong"<<endl;
			}
			break;
		case 2:
			i.setAccountNumber(accountNumber);
    		i.setBalance(balance);
    		cout<<"Enter the amount to be transferred"<<endl;
    		cin>>amount;
    		if (i.validate(amount)) {
    			if(i.transfer(amount)) {
	    			i.setBalance(n.getBalance() - amount);
	    			cout<<"Transfer occurred successfully"<<endl;
	    			printf("Remaining balance is %.2lf\n", i.getBalance());
	    		}
	    		else {
	    			cout<<"Transfer could not be made"<<endl; 
				}
			}
			else {
				cout<<"Account number or transfer amount seems to be wrong"<<endl;
			}
			break;	
		case 3:
			r.setAccountNumber(accountNumber);
    		r.setBalance(balance);
    		cout<<"Enter the amount to be transferred"<<endl;
    		cin>>amount;
    		if (r.validate(amount)) {
    			if(r.transfer(amount)) {
	    			i.setBalance(n.getBalance() - amount);
	    			cout<<"Transfer occurred successfully"<<endl;
	    			printf("Remaining balance is %.2lf\n", i.getBalance());
	    		}
	    		else {
	    			cout<<"Transfer could not be made"<<endl; 
				}
			}
			else {
				cout<<"Account number or transfer amount seems to be wrong"<<endl;
			}
			break;
		default:
			cout<<"Invalid choice"<<endl;
			break;	
	}
	return 0;
}




