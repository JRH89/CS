#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

// put function prototypes here
void exampleFunction(); // function prototype

int main() {

	// call the function
	exampleFunction();

	return 0;
}
// put function definitions here
void exampleFunction() {
	cout << "This is an example function." << endl;
}


/*
Notes:
------------------------------------------------------------------------

	Prototyping- declaring the function at the beginning of the program
		then defining it later.

	Formal Parameters- the parameters in the function definition.

	Actual Parameters- the parameters in the function call.

	Passing Data by Value- passing a copy of the data to the function.
		When an argument is passed by value, the function works with a 
		copy of the argument's value.

	Passing Data by Reference- passing the address of the data to the function.
		When an argument is passed by reference, the function works with
		the actual argument's value, not a copy of it.

	Example:
		void func(int &x); // x is a reference parameter
		int a = 5;
		func(a); // a is passed by reference

	A value returning function must return a value using the return statement,
		the returned value must match the function's return type.

	Example:
		int add(int x, int y) {
			return x + y;
		}

------------------------------------------------------------------------
*/