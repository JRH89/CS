//#include <iostream>
//#include <string>
//#include <iomanip>
//#include <limits>
//
//using namespace std;
//
//static void greet(string s) {
//	cout << s << endl;
//}
//
//static void pause() {
//	cout << "Press Enter to continue...";
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//}
//
//static void goodbye() {
//	cout << "Goodbye!" << endl;
//}
//
//int main() {
//
//	string greeting;
//	cout << "Enter a greeting to be displayed: \n";
//	getline(cin, greeting); // Get the entire line including spaces
//
//	greet(greeting); // Call the greet function
//	pause(); // Pause before exiting
//	goodbye(); // Say goodbye before exiting
//
//	return 0;
//}
//

/*
Notes:
----------------------------------------------------

	What is Modular Programming:
		Breaking a program into smaller, manageable functions or modules.

	What is a Function:
		A block of code that performs a specific task and can be reused.

	Motivation for Modular Programming:
		- Maintainability: easier to update and fix bugs.
		- Reusability: functions can be reused in different parts of the program 
		  or in different programs.
		- Readability: easier to understand the program's structure and flow.
		- Testing: individual functions can be tested independently.
		- Collaboration: multiple developers can work on different functions
		  simultaneously.
		- Debugging: easier to isolate and fix issues within specific functions.
		- Abstraction: hides complex implementation details behind a simple 
		  interface.
		- Organization: helps organize code logically, making it easier to 
		  navigate.

	The 'int' in int main() indicates that the function returns an integer value 
	to the operating system upon completion.

	void indicates that the function does not return any value.

	void greet() {
			cout << "Hello, World!" << endl;
	}

	Use descriptive names for functions to indicate their purpose.

	int main() {
			greet(); // Call the greet function
		return 0;
	}

	f(x) = x^2 + 4x in this case f is the function name and x is the parameter.

	Functions can have multiple parameters, separated by commas.

	Functions can return values using the return statement.

	Functions can be called multiple times with different arguments.

	Functions can call other functions.

	Functions can be defined before or after the main function, but they must be
	declared before they are used.

	Prototyping:
		Allows you to declare a function before its definition.
		This is useful when the function is defined after the main function or 
		when the function is defined in a different file.

	Example:
		void greet(); // Function prototype
		int main() {
			greet(); // Call the greet function
			return 0;
		}
		void greet() { // Function definition
			cout << "Hello, World!" << endl;
		}

	If a function returns a value, it must be indicated in the function prototype.

	Space in memory is allocated for parameters when the function is called.

	Parameters are passed by value, meaning a copy of the argument is made.

	Changes made to the parameter inside the function do not affect the original
	argument.

	More memory is used every time a function is called with parameters.
	To avoid this, parameters can be passed by reference using the & operator.

----------------------------------------------------
*/