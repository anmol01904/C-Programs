//PROGRAM-6
//when to use THIS pointer
//Organized by : Dr Vinay Arora

#include <iostream> 

using namespace std; 
  
class student
{
	private:
		int rollno;
		char name[20];
		double percent;
		
	public:
		void read()
		{
			cout<<"Enter student's rollno., name and percentage =";
			cin>>rollno>>name>>percent;
		}
		
		student compare (student ss2)
		{
			if (percent>=ss2.percent)
				return *this;	//returning object that generates call
			else
				return ss2;
		}
		
		void show()
		{
			cout<<"Name = "<<name;
			cout<<"\nRoll No = "<<rollno;
			cout<<"\nPercentage = "<<percent;
		}
};

int main()
{
	student s1, s2, s3;
	
	cout<<"Enter student 1 details \n";
	s1.read();
	cout<<"Enter student 2 details \n";
	s2.read();
	
	s3=s1.compare(s2);
	
	cout<<"Details of intelligent student is \n";
	s3.show();
	
	return 0;
}
