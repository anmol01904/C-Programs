//PROGRAM-7
//Program to demonstrate the concept of HIERARCHICAL INHERITANCE
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
};	//Base class specification ends 
class student : public person
{
	private:
		int rollno;
		char course[20];
		public:
			void read()
			{
				person :: read();
				cout<<"enter rollno and course=";
				cin>>rollno>>course;
			}
			void show()
			{
				person :: show();
				cout<<"\nrollno ="<<rollno;
				cout<<"\ncourse ="<<course;
			}
};	//Derived class specification ends 
class teacher : public person
{
		private:
			char dept_name[10];
			char qual[10];
		public:
			void read()
			{
				person :: read();
				cout<<"enter dept_name and qualification =";
				cin>>dept_name>>qual;
			}
			void show()
			{
				person :: show();
				cout<<"\ndepartment name ="<<dept_name;
				cout<<"\nqualification ="<<qual;
			}
};	//Derived class specification ends 
int main()
{
	student s1;
	
	cout<<"enter student information\n";
	s1.read();
	cout<<"displaying student information.....";
	s1.show();
	
	teacher t1;
	
	cout<<"\nenter teacher information\n";
	t1.read();
	cout<<"displaying teacher information.....";
	t1.show();
	
	getch();
	return 0;
}
