#include <iostream>
#include <stdlib.h>
#include "Exhibition.cpp"
#include "StageEvent.cpp"
using namespace std;
string* splitString(string str){
	string* arr = new string[25];
	int i=0;
	string delimiter = ",";
	size_t pos = 0;
	string token;
	str+=",";
	while ((pos = str.find(delimiter)) != string::npos) {
	    token = str.substr(0, pos);
	    arr[i]=token;
	
	    str.erase(0, pos + delimiter.length());
	    i++;
	}

  return arr;   
}
int main(){
    int choice;
    cout<<"Choose Event type"<<endl;
    cout<<"1.Exhibition"<<endl;
    cout<<"2.Stage Event"<<endl;
    cin>>choice;
    
    string details;
    string* details_arr;
    int noOfStalls, noOfSeats;
    Event* event;
    switch(choice) {
    	case 1:
    		cout<<"Enter the details of Exhibition in CSV format"<<endl;
    		cin>>details;
    		details_arr = splitString(details);
    		
    		sscanf(details_arr[4].c_str(), "%d", &noOfStalls);
    		event = new Exhibition(
    			details_arr[0], details_arr[1], details_arr[2], details_arr[3], noOfStalls
			);
			event->display();
			break;
		
		case 2:
			cout<<"Enter the details of Stage Event in CSV format"<<endl;
    		cin>>details;
    		details_arr = splitString(details);
    		
    		sscanf(details_arr[4].c_str(), "%d", &noOfSeats);
    		event = new StageEvent(
    			details_arr[0], details_arr[1], details_arr[2], details_arr[3], noOfSeats
			);
			event->display();
			break;
			
		default:
			cout<<"Invalid choice"<<endl;
			break;		
	}
	return 0;
}


