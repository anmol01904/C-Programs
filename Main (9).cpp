#include <iostream>
#include<string>
#include "EventExport.cpp"
using namespace std;
int main()
{
      int n;
  	cout<<"Enter the number of events :"<<endl;
  	cin>>n;
  	
  	Event *events = new Event[n];
  	
  	string name, details, type, organiser;
  	int attendeesCount;
  	double projectedExpenses;
  	for (int i = 0; i < n; i++) {
  		cout<<"Enter the details of event "<<i + 1<<endl;
		cout<<"Name :"<<endl;
		cin.ignore();
		getline(cin, name);
		cout<<"Detail :"<<endl;
		cin>>details;
		cout<<"Type :"<<endl;
		cin>>type;
		cout<<"Organiser :"<<endl;
		cin>>organiser;
		cout<<"Attendees Count :"<<endl;
		cin>>attendeesCount;
		cout<<"Projected Expenses :" <<endl;
		cin>>projectedExpenses;
		events[i] = Event(name, details, type, organiser, attendeesCount, projectedExpenses);	
	}
	
	EventExport exportManager;
	int choice;
	cout<<"1. Export all the event details in CSV format"<<endl;
	cout<<"2. Export name and organiser of the given event type"<<endl;
	cin>>choice;
	
	switch(choice) {
		case 1:
			exportManager.exportCSVFormat(events, n);
			break;
		case 2:
			cout<<"Enter the type"<<endl;
            cin.ignore();
			getline(cin, type);
			exportManager.exportNameOrganiserInfo(events, n, type);
			break;
		default:
			cout<<"Invalid choice"<<endl;
			break;			
	}
	
	delete []events;
    return 0;
}




