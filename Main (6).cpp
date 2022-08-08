#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Circle.cpp"
#include"Rectangle.cpp"
#include"Square.cpp"
using namespace std;
int main()
{
        int input;
        double len,wid,rad;
        double a;
		
		Shape* shape = NULL;
		
        cout<<"Select the shape:\n1.Circle\n2.Rectangle\n3.Square"<<endl;
        cin>>input;
        switch(input)
        {
          	case 1:
          		shape = new Circle();
          		
          		cout<<"Enter the radius of the circle:"<<endl;
          		cin>>rad;
          		shape->setRadius(rad);
          		
          		printf("Perimeter of Circle is: %.2lf\n", shape->calculatePerimeter());
          		break;
          		
          	case 2:
          		shape = new Rectangle();
          		
			  	cout<<"Enter the length of the rectangle:"<<endl;
				cin>>len;
				shape->setLength(len);
				cout<<"Enter the width of the rectangle:"<<endl;
				cin>>wid;
				shape->setWidth(wid);
				
				printf("Perimeter of Rectangle is: %.2lf\n", shape->calculatePerimeter());
				break;
			
			case 3:
				shape = new Square();
				
				cout<<"Enter the length of the square:"<<endl;
				cin>>len;
				shape->setLength(len);	
				
				printf("Perimeter of Square is: %.2lf\n", shape->calculatePerimeter());
				break;
			
	        default:
	            cout<<"Nothing";
	            break;
        }
        
    return 0;
}

