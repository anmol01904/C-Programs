#include <iostream>
using namespace std;
class stall
{
        private:
			string stallType;
			int squareFeet,numberOfTv;
			
    public:
    	
    	void setStallType(string stalltype)
     	{
         this->stallType=stalltype;
    	}
    	void setSquareFeet(int sqft)
     	{
     		this->squareFeet=sqft;
     	}
     	void setNumberOfTv(int notv)
     	{
     		this->numberOfTv=notv;
     	}
     	string getStallType()
     	{
         return stallType; 
     	}
     	
     	int getSquareFeet()
     	{
     		return squareFeet;
     	}
     	
     	int getNumberOfTv()
     	{
     		return numberOfTv;
     	}
     	
   
    double computeCost(string stallType,int squareFeet)
    {
    	double costPerFeet = 0;
        if (stallType == "Platinum") {
        	costPerFeet = 2200; 
		}
		else if (stallType == "Diamond") {
			costPerFeet = 1800; 
		}
		else if (stallType == "Gold") {
			costPerFeet = 1500;
		}
		else {
			cout<<"Please enter a valid stall type!!"<<endl;
			return -1;
		}
		double cost = costPerFeet * squareFeet;
		return cost;
    }
    double computeCost(string stallType,int squareFeet,int numberOfTV)
    {
    	double costPerFeet = 0;
        if (stallType == "Platinum") {
        	costPerFeet = 2200; 
		}
		else if (stallType == "Diamond") {
			costPerFeet = 1800; 
		}
		else if (stallType == "Gold") {
			costPerFeet = 1500;
		}
		else {
			cout<<"Please enter a valid stall type!!"<<endl;
			return -1;
		}

    	double cost = costPerFeet * squareFeet;
    	cost += (numberOfTV * 3000);
    	return cost;
	}
};

