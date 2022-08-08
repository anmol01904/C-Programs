#include "ContactDetails.cpp"
#include <iostream>
#include<string>
using namespace std;
bool  validateEmail(string e1)
{
	// Returns true if email is valid, false otherwise
	return ((e1.find('@') != string::npos) && (e1.find(".com") != string::npos));
}

bool  findDuplicates(string a,string b)
{
	// Returns true if duplicates present else false
    return a == b;
}

int main()
{
    string mobno,almobno,landline,id;
    bool emailid,dnum;
    cout<<"Enter details for Registration:"<<endl;
    cout<<"Enter Mobile Number:"<<endl;
    cin>>mobno;
    cout<<"Enter Alternate Mobile Number:"<<endl;
    cin>>almobno;
    cout<<"Enter Landline Number:"<<endl;
    cin>>landline;
    cout<<"Enter Email-Id:"<<endl;
    cin>>id;
    
    ContactDetails details = ContactDetails(mobno, almobno, landline, id);
    details.display(validateEmail(id), !findDuplicates(mobno, almobno));
    
    return 0;
}
