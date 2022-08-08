//PROGRAM-9
//Program to demonstrate the concept of Ambiguity in MULTIPLE INHERITANCE
//Program to implement multiple inheritance to calculate total revenue generated from the sale of books
//Organized by : Dr Vinay Arora

#include<iostream>
#include<conio.h>

using namespace std;

class publication
{
	private:
		char publisher[20];
		protected:
			double price;
			public:
				void read()
				{
					cout<<"enter publisher and price:";
					cin>>publisher>>price;
				}
				void show()
				{
					cout<<"\npublisher = "<<publisher;
					cout<<"\nprice="<<price;
				}
};
class sales
{
	protected:
		double pub_sales;
		public:
			void read()
			{
				cout<<"\nEnter total sales=";
				cin>>pub_sales;
			}
			void show()
			{
				cout<<"\ntotal sales of publication ="<<pub_sales;
							
		}
	};
	class book : public publication, public sales
	{
		char author[20];
		long isbn;
		int pages;
		public:
			void read()
			{
				cout<<"\nenter author,isbn number,pages:";
				cin>>author>>isbn>>pages;
			}
			void show()
			{
				cout<<"\nBook info:"<<author<<'\t'<<isbn<<'\t'<<pages;
			}
			void cal_sal_amt()
			{
				double saleamt;
				saleamt=price*pub_sales;
				cout<<"sale amount="<<saleamt;
			}
			
	};
	int main()
	{
		book b1;
		
		cout<<"enter publication info..\n";
		b1.publication::read();
		
		cout<<"enter sales info..\n";
		b1.sales::read();
		
		
		cout<<"enter book info..\n";
		b1.read();
		
		b1.cal_sal_amt();
		
		b1.publication::show();
		b1.sales::show();
		
		b1.show();
		
		getch();
		return 0;
	}
			
			
			

