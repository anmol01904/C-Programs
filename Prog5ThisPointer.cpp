#include <iostream> 
using namespace std; 
class rectangle
{
	private:
		int l, b;
	public:
		void setdata(int l, int b)
		{
			this->l=l; 
			this->b=b; 
		}
		void area()
		{
			cout<<"Area = "<<l*b;
		}
};
int main() 
{ 
   	rectangle r1;
   	r1.setdata(10,15);
   	r1.area();
   	return 0;
}
