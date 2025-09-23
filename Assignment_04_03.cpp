// *******************************************************************************
 // Assignment 4C: Using Files - Numeric Processing
 // Author: Jared Hooker
 // Description: Random .txt assignment
 // Date:September 21, 2025
 // ********************************************************************************

//#include <iostream>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    std::ifstream infile("random.txt");
//    if (!infile) {
//        cout << "Error: Could not open random.txt" << endl;
//        return 1;
//    }
//
//    int count = 0;
//    double sum = 0, num;
//    while (infile >> num) {
//        sum += num;
//        ++count;
//    }
//    infile.close();
//
//    if (count == 0) {
//        cout << "No numbers found in the file." << endl;
//    } else {
//        double average = sum / count;
//        cout << fixed << setprecision(2);
//        cout << "Count:   " << count << endl;
//        cout << "Sum:     " << sum << endl;
//        cout << "Average: " << average << endl;
//    }
//    return 0;
//}
