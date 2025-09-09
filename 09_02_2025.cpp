//#include <iostream> // for input and output
//#include <string> // for string operations
//#include <iomanip> // for formatted output
//#include <fstream> // for file operations
//
//using namespace std;
//
//int main() {
//
//	// Declare variables
//	ifstream inFile; // input file stream
//	ofstream outFile; // output file stream
//	int quantity;
//	float itemPrice;
//	float totalBill;
//	string name;
//
//	cout << setprecision(2) << fixed << showpoint << endl;
//
//	cout << "Enter the name of the item you are purchasing:" << endl;
//	getline(cin, name);
//
//	cout << "Please input the number of items bought:" << endl;
//	cin >> quantity;
//	cin.ignore(); // to ignore the newline character after integer input
//
//	cout << "How much does each item cost?" << endl;
//	cin >> itemPrice;
//	cin.ignore(); // to ignore the newline character after float input
//
//	totalBill = quantity * itemPrice;
//
//	cout << "Your total bill for " << name << " is $" << totalBill << endl;
//
//	return 0;
//}