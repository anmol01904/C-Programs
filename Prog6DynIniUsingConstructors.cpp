//DYNAMIC INITIALIZATION USING CONSTRUCTOR
//The main advantage of dynamic initialization is the ability to allow different modes of initialization
//using overloaded constructors. Hence, the user can provide different format of data depending on the
//requirement

//Example of displaying height of a person in feet and inches

#include<iostream>
#include<conio.h>

using namespace std;

class height
{
	private:
		int feet;
		double inches;
	public:
		height(int f)
		{
			feet = f;
			inches = 0.0;
		}
		height(double f)
		{
			feet = int (f);
			inches = (f-int(f))*12.0;
		}
		height()
		{
			feet=inches=0;
		}
		height(int f, double in)
		{
			feet = f;
			inches = in;
		}
		void show()
		{
			cout<<"Feet = "<<feet<<" Inches="<<inches<<endl;
		}
};

int main()
{
	height h1, h2, h3;//default constructor invoked

	int ht_feet;
	cout<<"Enter height in terms of feet only : ";
	cin>>ht_feet;
	h1 = height(ht_feet);
	
	double ht_fract;
	cout<<"Enter height in terms of feet in fractional form : ";
	cin>>ht_fract;
	h2 = height (ht_fract);
	
	int ft1;
	double in1;
	cout<<"Enter height in terms of feet and inches : ";
	cin>>ft1>>in1;
	
	h3=height (ft1,in1);
	
	h1.show();
	h2.show();
	h3.show();
	
	getch();
	return 0;
}
