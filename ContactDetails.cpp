#include<iostream>
#include<string>
using namespace std;
class ContactDetails
{
    private:
	    string mobile;
	    string alternateMobile;
	    string landLine;
	    string email;
    public:
	    ContactDetails(){}
	    ContactDetails(string mobile,string alternateMobile,string landLine,string email)
	    {
	        this->mobile=mobile;
	        this->alternateMobile=alternateMobile;
	        this->landLine=landLine;
	        this->email=email;
	    }
	    
	    friend bool validateEmail(string);
	    friend bool findDuplicates(string,string);
	    
	    void display(bool emailstatus,bool mobilestatus)
	    {    
	    	// prints success message if both email status and mobile status are true.
	    	// print failure message if otherwise.
	        emailstatus && mobilestatus
	        ? cout<<"Registered Successfully!!!"<<endl
	        : cout<<"Please check your details"<<endl;
    	}
};
