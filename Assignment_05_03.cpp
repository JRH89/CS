// *******************************************************************************
// Assignment 5C: Lowest Score Drop
// Author: Jared Hooker
// Description: This program will calculate the average of a set of test scores
// after dropping the lowest score.
// Status: Complete
// Date: October 01, 2025
// ********************************************************************************

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//void getScore(float &score);
//void calcAverage(float, float, float, float, float);
//float findLowest(float, float, float, float, float);
//
//int main() {
//
//    float scores[5];
//
//    for (int i = 0; i < 5; ++i) {
//        getScore(scores[i]);
//    }
//    calcAverage(scores[0], scores[1], scores[2], scores[3], scores[4]);
//
//    return 0;
//}
//void getScore(float &score) {
//    do {
//        cout << "Enter a test score (0-100): ";
//        cin >> score;
//        if (score < 0 || score > 100)
//            cout << "Invalid. Score must be between 0 and 100.\n";
//    } while (score < 0 || score > 100);
//}
//float findLowest(float a, float b, float c, float d, float e) {
//    float lowest = a;
//    if (b < lowest) lowest = b;
//    if (c < lowest) lowest = c;
//    if (d < lowest) lowest = d;
//    if (e < lowest) lowest = e;
//    return lowest;
//}
//void calcAverage(float a, float b, float c, float d, float e) {
//    float lowest = findLowest(a, b, c, d, e);
//    float sum = a + b + c + d + e - lowest;
//    float average = sum / 4.0f;
//    cout << fixed << setprecision(2);
//    cout << "Average of the four highest test scores: " << average << endl;
//}