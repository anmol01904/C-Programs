//PROGRAM-5
//Program to demonstrate the concept of OVERRIDING MEMBER FUNCTION
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class person
{
	private:
		char name[20];
		long int phno;
		public:
			void read()
			{
				cout<<"enter name and phno=";
				cin>>name>>phno;
			}
			void show()
			{
				cout<<"\nname ="<<name;
				cout<<"\nphone number ="<<phno;
			}
};
class student : public person	//publicly derived class
{
	private:
		int rollno;
		char course[20];
	public:
			void read()
			{
				person :: read();	//refers to read() of 'person' class
				cout<<"enter rollno and course=";
				cin>>rollno>>course;
			}
			void show()
			{
				person :: show();	//refers to show() of person class
				cout<<"\nrollno ="<<rollno;
				cout<<"\ncourse ="<<course;
			}
};
int main()
	{
		student s1;
		s1.read();
		
		cout<<"displaying student information";
		s1.show();
		return 0;
	}

