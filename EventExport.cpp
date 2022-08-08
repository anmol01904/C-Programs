#include <iostream>
#include <string>
#include "Event.cpp"
using namespace std;
class EventExport{
    public:
    void exportCSVFormat(Event *e,int num)
    {
        for (int i = 0; i < num; i++) {
        	cout<<e[i].getName()<<", ";
        	cout<<e[i].getDetail()<<", ";
        	cout<<e[i].getType()<<", ";
        	cout<<e[i].getOrganiser()<<", ";
        	cout<<e[i].getAttendeesCount()<<", ";
        	cout<<e[i].getProjectedExpenses()<<endl;
		}
    }
    
    void exportNameOrganiserInfo(Event *e,int num,string type)
    {
        for (int i = 0; i < num; i++) {
        	if (!e[i].getType().compare(type)) {
        		cout<<e[i].getName()<<", ";
				cout<<e[i].getOrganiser()<<endl;	
			}
		}
    }
};
