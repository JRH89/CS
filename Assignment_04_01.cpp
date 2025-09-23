// *******************************************************************************
// Assignment 4A: Chars for ASCII Codes
// Author: Jared Hooker
// Description: A program that uses a loop to display the characters for teh ASCII
// codes 0 through 127 and displays 16 characters on each line.
// Status: Complete
// Date:September 21, 2025
// ********************************************************************************

//#include <iostream>
//#include <iomanip>
//#include <cctype>
//
//using namespace std;
//
//int main() {
//    // Print header row for codes
//    for (int i = 0; i < 16; ++i)
//        cout << setw(4) << i;
//    cout << endl;
//
//    // Print separator
//    cout << string(16 * 4, '-') << endl;
//
//    // Print ASCII codes and characters, 16 per line
//    for (int row = 0; row < 8; ++row) {
//        for (int col = 0; col < 16; ++col) {
//            int code = row * 16 + col;
//            if (code <= 127)
//                cout << setw(4) << code;
//        }
//        cout << endl;
//        for (int col = 0; col < 16; ++col) {
//            int code = row * 16 + col;
//            if (code <= 127)
//                cout << setw(4) << (isprint(code) ? static_cast<char>(code) : ' ');
//        }
//        cout << endl;
//        cout << endl;
//    }
//    return 0;
//}