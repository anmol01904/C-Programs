//PROGRAM-3
//Program to demonstrate the concept of PRIVATE INHERITANCE
//Organized by : Dr Vinay Arora

#include <iostream> 

using namespace std; 
  
class base
{
	private:
		int priv_base;
	public:
		int prot_base;

		int get_base_priv()
		{
			priv_base=10;
			return(priv_base);
		}
}; //base class specification ends

class derive : private base
{
	private:
		int priv_der;
	protected:
		int prot_der;
	public:
		void f1()		
		{
			int x;
			//x=priv_base; generates error, base's private member not accessible
			x=get_base_priv(); //Inherited base's public members accesses private data
			
			cout<<"Value of base's private data members = "<<x;
			prot_base=20;	//Baes's protected member access
			cout<<"\nValue of base's protected data member = "<<prot_base;
		}
};	//derived class specification ends

int main()
{
	derive d;
	int y;
	d.f1();
	y=d.get_base_priv();//GENERATES error as base public member not accessible
	cout<<"\nValue of base private data member accessed indirectly = "<<y;
	//y=d.prot_base; //generate error as base's protected member not accessible
	
	return 0;
}

