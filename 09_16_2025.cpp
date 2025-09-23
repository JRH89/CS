//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//
//
//	return 0;
//}


/*
Notes:
----------------------------------------------------

	++ is the increment operator
	It increases an integer value by 1

	val++ is the postfix form
	++val is the prefix form

	The difference is when the increment takes place,
	but in most cases, it doesn't matter which one you use.
	the postfix will increment after the value is used,
	the prefix will increment before the value is used.

	Example:

		int val = 5;

		cout << val++ << endl; // prints 5, then val becomes 6
		cout << ++val << endl; // val becomes 7, then prints 7

	More examples:

		int a = 5;

		int b = a++; // b is 5, a becomes 6
		int c = ++a; // a becomes 7, c is 7
		int d = a++; // d is 7, a becomes 8
		int e = ++a; // a becomes 9, e is 9

		result = a++ + --a; // result is 17, a becomes

		int main() {
			int number = 1;

			while (number <= 5) {
				cout << "Number: " << number++ << endl; // prints 1 to 5
			}

			cout << "That's all!/n";
			cout << "Final number: " << number << endl; // prints 6
			return 0;
		}

	Counter Variables:

		Counter- a variable that is incremented or decremented each time a loop 
		iterates.

		for (int i = 1; i <= 10; ++i) {
			cout << i << " "; // prints 1 to 10
		}

		i is the counter variable, it keeps track of how many times the loop has run.
		without a counter, we wouldn't know when to stop the loop... this 
		leads to infinite loops.



----------------------------------------------------
*/