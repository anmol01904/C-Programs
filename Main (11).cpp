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
    Exhibition e;
    
    string exhibitionDetail, stageEventDetail;

    cout<<"Choose Event type\n";
    cout<<"1.Exhibition\n";
    cout<<"2.Stage Event\n";
    cin>>choice;
    switch(choice){
        case 1:
        {
            cout<<"Enter the details of Exhibition in CSV format"<<endl;
            cin>>exhibitionDetail;
        	string* details = splitString(exhibitionDetail);

        	int noOfStalls;
        	sscanf(details[4].c_str(), "%d", &noOfStalls);
        	
        	Exhibition event = Exhibition(details[0], details[1], details[2], details[3], noOfStalls);
        	event.display();
        	break;
        }
        case 2:
        {
            cout<<"Enter the details of Stage Event in CSV format"<<endl;
            cin>>stageEventDetail;
            string* details = splitString(stageEventDetail);
            
            int noOfSeats;
            sscanf(details[4].c_str(), "%d", &noOfSeats);
            
            StageEvent event = StageEvent(details[0], details[1], details[2], details[3], noOfSeats);
            event.display();
            break;
        }
        default:
            cout<<"Invalid choice\n";
            break;
    }
    return 0;
}

