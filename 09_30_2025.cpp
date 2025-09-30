//#include <iostream>
//#include <string>
//#include <iomanip>
//#include <limits>
//
//using namespace std;
//
//const int SPEED = 45; // stored in global memory
//
//void countCalls();
//void foo();
//
//int main() 
//{
//
//	// Demonstrate static variable
//	countCalls();
//	countCalls();
//	countCalls();
//
//	// Demonstrate static variable in another function
//	foo();
//	foo();
//	foo();
//
//	// Demonstrate global constant
//	cout << SPEED << endl;
//
//	return 0;
//
//}
//void countCalls() 
//{
//	static int callCount = 0; // static variable to keep track of the number of calls
//	callCount++;
//	cout << "Function has been called " << callCount << " times." << endl;
//
//	// Accessing global constant
//	cout << SPEED << endl;
//}
//void foo() 
//{
//	static int callCount = 0; // stored in static memory
//	callCount++;
//	cout << callCount << endl;
//
//	// Accessing global constant
//	cout << SPEED << endl;
//}

/*
Notes:
------------------------------------------------------------------------

	Static variables:
		- used in object oriented programming
		- static member variables are shared among all instances of a class
		- stored in the global/static memory area
		- retains its value between function calls

	If a binary number starts with 1 its a negative number
		- 2's complement is used to represent negative numbers in binary
	If a binary number starts with 0 its a positive number
		- positive numbers are represented in binary as is

	10011100b (-100d)

	1. convert to positive
	2. use powers of 2 to convert

	10011100
	01100011 -> 1's complement

	add to take to 2's complement

	01100011
	01100100 -> 2's complement



------------------------------------------------------------------------
*/