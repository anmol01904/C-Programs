//PROGRAM-6
//Program to demonstrate the concept of MULTI-LEVEL INHERITANCE
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
				cout<<"enter name and phno = ";
				cin>>name>>phno;
			}
			void show()
			{
				cout<<"\nname = "<<name;
				cout<<"\nphone number = "<<phno;
			}
};
class student : public person
{
		private:
			int rollno;
			char course[20];
		public:
			void read()
			{
				person :: read();	//Access person's read()
				cout<<"enter rollno and course=";
				cin>>rollno>>course;
			}
			void show()
			{
				person :: show();	//Access person's show()
				cout<<"\nrollno ="<<rollno;
				cout<<"\ncourse ="<<course;
			}
};
class exam : public student
{
	private:
		int m[4];
		double per;
		public:
			void read();
			void cal();
			void show();
};
void exam :: read()
{
	student :: read();	//Access student's read()
	cout<<"enter marks :";
	for(int i=0;i<4;i++)
	cin>>m[i];
}
void exam :: cal()
{
	int tot_marks=0;
	for(int i=0;i<4;i++)
	tot_marks+=m[i];
	per=double(tot_marks)/4;
}
void exam :: show()
{
	student :: show();	//Access student's show()
	cout<<"\nmarks :";
	for(int i=0;i<4;i++)
	cout<<m[i]<<"\t";
	cout<<"\npercentage ="<<per;
}
int main()
{
	exam e1;	
	e1.read();	//Input student's information
	e1.cal();	//Calculating result of student
	e1.show();	//Displaying student's information

	return 0;
}
