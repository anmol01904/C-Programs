#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Food.h"
using namespace std;
class NonVegFood: public Food
{
    public:
    	int costs[6] = {0, 80, 90, 100, 80, 70};
    	string names[6] = {"", "Chicken Briyani", "Chicken Fried-rice", "Chicken Fry", "Chicken noodles", "Non-Veg Meals"};
		void displayMenu(){
			cout<<"Non-Veg Food Items"<<endl;
			printf("%-15s%-25s%-25s\n", "S.no", "Name", "Cost");
			
			for (int i = 1; i < 6; i++) {
				printf("%-15d%-25s%-25d\n", i, names[i].c_str(), costs[i]);
			}
		}
		void calculateBill(){
			int total_cost = 0;
			for (int i = 0; i < 30; i++) {
				if (selectedItems[i] == NULL) {
					break;
				}
				total_cost += costs[selectedItems[i][0]] * selectedItems[i][1];	
			}
			cout<<"Total Order Amount is Rs."<<total_cost<<endl;
		}
		void getNameAndCost(string* nameAndCost, int sNo, int quantity){
			int cost = costs[sNo] * quantity;
			ostringstream str_stream; 
			str_stream<<cost;
			string cost_str = str_stream.str();

			nameAndCost[0] = names[sNo];
			nameAndCost[1] =  cost_str;
		}
};


