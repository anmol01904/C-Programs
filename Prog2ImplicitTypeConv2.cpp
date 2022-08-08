//PROGRAM-2
//Implicit Type Conversion
//Organized by : Dr Vinay Arora

//bool -> char -> short int -> int -> 
//unsigned int -> long -> unsigned -> 
//long long -> float -> double -> long double

//long double > double > float > long int > int > char

#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int x = 10; // integer x 
    char y = 'a'; // character c 
  
    x = x + y; 
  	
    double z = x + 1.1; 
//	double z = x + 1.0; 
  
    cout << "x = " << x << endl 
         << "y = " << y << endl 
         << "z = " << z << endl; 
  
    return 0; 
}
