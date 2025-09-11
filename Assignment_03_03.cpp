// *******************************************************************************
// Assignment 3C: Geometry Calculator
// Author: Jared Hooker
// Description: Provides a menu for the user to choose from to calculate the area 
// of a circle, rectangle, or triangle
// Status: Complete
// Date:September 09, 2025
// ********************************************************************************

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//
//	int choice = 0;
//
//	cout << "Geometry Calculator" << endl;
//	cout << "1. Calculate the Area of a Circle" << endl;
//	cout << "2. Calculate the Area of a Rectangle" << endl;
//	cout << "3. Calculate the Area of a Triangle" << endl;
//	cout << "4. Quit" << endl;
//	cout << "Enter your choice (1-4): ";
//	cin >> choice;
//
//	switch (choice) {
//		case 1: {
//		double radius, area;
//		const double PI = 3.14159;
//		cout << "Enter the radius of the circle: ";
//		cin >> radius;
//		if (radius < 0) {
//			cout << "Error: Radius cannot be negative." << endl;
//		}
//		else {
//			area = PI * radius * radius;
//			cout << fixed << setprecision(2);
//			cout << "The area of the circle is " << area << endl;
//		}
//		break;
//		}
//
//		case 2: {
//			double length, width, area;
//			cout << "Enter the length and width of the rectangle: ";
//			cin >> length >> width;
//			if (length < 0 || width < 0) {
//				cout << "Error: Length and width cannot be negative." << endl;
//			}
//			else {
//				area = length * width;
//				cout << fixed << setprecision(2);
//				cout << "The area of the rectangle is " << area << endl;
//			}
//			break;
//		}
//		case 3: {
//			double base, height, area;
//			cout << "Enter the base and height of the triangle: ";
//			cin >> base >> height;
//			if (base < 0 || height < 0) {
//				cout << "Error: Base and height cannot be negative." << endl;
//			}
//			else {
//				area = 0.5 * base * height;
//				cout << fixed << setprecision(2);
//				cout << "The area of the triangle is " << area << endl;
//			}
//			break;
//		}
//		case 4:
//		cout << "Exiting the program." << endl;
//		break;
//		default:
//		cout << "Error: Invalid choice. Please select a number between 1 and 4." << endl;
//	}
//
//	return 0;
//}