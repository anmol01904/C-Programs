//PROGRAM-10
//Program to demonstrate the concept of HYBRID INHERITANCE
//Organized by : Dr Vinay Arora
 
//| STUDENT |
//     ^
//     |
//|EXAM_INTERNAL|     |EXAM_EXTERNAL|
//     ^                   ^
//     |                   |
//  |RESULT|_______________|
   
#include<iostream>
#include<conio.h>

using namespace std;

class student
{
	private:
		int rollno;
		char name[20];
				public:
			void read()
			{
				cout<<"enter rollno and name : ";
				cin>>rollno>>name;
			}
			void show()
			{
				cout<<"\nrollno = "<<rollno;
				cout<<"\nname = "<<name;
			}
};
class exam_internal 
{
		protected:
			int sub1_marks;
			int sub2_marks;
			
		public:
			void read_marks()
			{
				cout<<"enter internal marks of sub1 (max 40)";
				cin>>sub1_marks;
				cout<<"enter internal marks of sub2 (max 40)";
				cin>>sub2_marks;
			}
			void display_marks()
			{
				cout<<"internal marks of sub1 ="<<sub1_marks;
				cout<<"internal marks of sub2 ="<<sub2_marks;
			}
		};

class exam_external: public student
{
		protected:
			int sub1_ext_marks;
			int sub2_ext_marks;
			
		public:
			void read()
			{
				
				cout<<"enter external marks of sub1=";
				cin>>sub1_ext_marks;
				cout<<"enter external marks of sub2=";
				cin>>sub2_ext_marks;
			}
			void display_marks()
			{
				cout<<"\nExternal marks of sub1 ="<<sub1_ext_marks;
				 cout<<"\nExternal marks of sub2 ="<<sub2_ext_marks;
			}
		};

class result : public exam_internal, public exam_external
		{
			private:
				int total_marks;
				public:
					void cal_result()
					{
						total_marks=sub1_marks+sub2_marks+sub1_ext_marks+sub2_ext_marks;
						cout<<"total marks obtained="<<total_marks;
					}
		};

		int main()
		{
			result r1;
			
			cout<<"enter student info:\n";
			r1.student::read();
			
			cout<<"enter marks of internal exam:\n";
			r1.exam_internal::read_marks();
			
			cout<<"enter marks of external exam:\n";
			r1.read();
			
			cout<<"displaying student details \n";
			r1.show();
			
			r1.exam_internal::display_marks();
			r1.exam_external::display_marks();
			
			cout<<"\n calculating and displaying result\n";
			r1.cal_result();

			getch();
			return 0;
		}

