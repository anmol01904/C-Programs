//Program to demonstrate the ABSTRACT CLASS
//Organized By: Dr Vinay Arora

/*	Program that demonstrates the use of PURE VIRTUAL FUNCTION in a practical applicaiton.
	Let us consider a situation where a bank administration wants to terminates their employees based on 
	their performance. The bank will terminate employee on the basis of following condition.

	(a) If the bank's employee is a manager then his monthly target for maintaining funds should not be less 
	than ten lakh rupees.
	
	(b) If the bank employee is a marketing executive whose job is to open accounts then his monthly target 
	should not be less than 20 accounts.
*/

#include<iostream>
#include<conio.h>

using namespace std;

class employee
{
	private:
		char name[20];
	public:
		void read()
		{
			cout<<"Enter name :";
			cin>>name;
		}
		void show()
		{
			cout<<"Name of employee= "<<name<<"\n";
		}
		void inputdata()
		{
			
		}
		
//		virtual int isunderperformer()
//		{
//			
//		}
};

class mktexec : public employee
{
	private:
		int accts_open;			//number of accounts opened
	public:
		void inputdata()
		{
			read();				//invoking read() of base
			cout<<"Enter number of accounts opened = ";
			cin>>accts_open;
		}
		int isunderperformer()
		{
			if (accts_open<20)
				return (1);		//under-performer
			else
				return (0);
		}
};

class manager : public employee
{
	double target;
	public:
		void inputdata()
		{
			read();
			cout<<"Enter the target amount acheived = ";
			cin>>target;
		}
		int isunderperformer()
		{
			if (target<1000000)
				return (1);		//under-performer
			else
				return (0);
		}
};

int main()
{
	employee *ptr[20];			//array of pointers to employee
	int n=0;					//number of employees
	int choice;
	char ch;
	
	do
	{
		cout<<"Enter 1 for mkt.exe. OR 2 for manager ->";
		cin>>choice;
		
		if(choice == 1)
			ptr[n] = new mktexec;
		else if (choice == 2)
			ptr[n] = new manager;
		else
		{
			cout<<"Invalid choice \n";
			continue;
		}
		
		ptr[n]->inputdata();
		n++;
		
		cout<<"Want to input more (y/n)? :";
		cin>>ch;
	}while(ch=='y');
	
	for (int i=0; i<n; i++)
	{
		ptr[i]->show();
		
		if (ptr[i]->isunderperformer())
			cout<<"This employee should be terminated \n";
		else
			cout<<"Employee is a good performer \n";
	}
	getch();
	return 0;
}
