#include <iostream>
#include <string>
#include<stdio.h>
#include<bits/stdc++.h>
#include"VegFood.cpp"
#include"NonVegFood.cpp"
using namespace std;
int main()
{
	int maxItems = 30;
    int** selectedItems = new int*[maxItems];
    for (int i = 0; i < maxItems; i++) {
    	selectedItems[i] = NULL;
	}
	
	string type;
	cout<<"Choose type(veg/non-veg)"<<endl;
	cin>>type;
	
	Food* food;
	if (type == "veg") {
		food = new VegFood();
	}
	else if (type == "non-veg") {
		food = new NonVegFood();
	}
	food->displayMenu();
	
	int latestIndex = 0;
	string orderMore;
	string* nameAndCost = new string[2];
	do {
		selectedItems[latestIndex] = new int[3];
		cout<<"Enter the S.no of the food to order"<<endl;
		cin>>selectedItems[latestIndex][0];
		cout<<"Enter the no. of items"<<endl;
		cin>>selectedItems[latestIndex][1];
		
		food->getNameAndCost(nameAndCost, selectedItems[latestIndex][0], selectedItems[latestIndex][1]);

		int cost;
		sscanf(nameAndCost[1].c_str(), "%d", &cost);
		selectedItems[latestIndex][2] = cost;
		
		cout<<"Cost of "<<selectedItems[latestIndex][1]<<" "<<nameAndCost[0].c_str()<<" is Rs."<<cost<<endl;
		latestIndex++;
		
		cout<<"Do you want order more items?(yes/no)"<<endl;
		cin>>orderMore;
	}
	while(orderMore == "yes");
	
	food->selectedItems = selectedItems;
	food->calculateBill();
	
	return 0;
}


