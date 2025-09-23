// *******************************************************************************
 // Assignment 4B: Math Tutor
 // Author: Jared Hooker
 // Description: An upgraded version of the Math Tutor program that includes
 // 	more features.
 // Date:September 21, 2025
 // ********************************************************************************

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <limits>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    srand(static_cast<unsigned int>(time(0)));
//    int choice;
//    do {
//        cout << "\nMath Tutor Menu" << endl;
//        cout << "  1. Addition" << endl;
//        cout << "  2. Subtraction" << endl;
//        cout << "  3. Multiplication" << endl;
//        cout << "  4. Division" << endl;
//        cout << "  5. Quit" << endl;
//        cout << "Enter your choice (1-5): ";
//        cin >> choice;
//
//        if (cin.fail()) {
//            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//            cout << "Invalid input. Please enter a number between 1 and 5." << endl;
//            continue;
//        }
//
//        int a, b, userAnswer, correctAnswer;
//        double userAnswerD, correctAnswerD;
//        switch (choice) {
//            case 1: // Addition
//                a = rand() % 100 + 1;
//                b = rand() % 100 + 1;
//                cout << "\n  " << a << " + " << b << " = ";
//                cin >> userAnswer;
//                correctAnswer = a + b;
//                if (userAnswer == correctAnswer)
//                    cout << "Correct!" << endl;
//                else
//                    cout << "Incorrect. The answer is " << correctAnswer << "." << endl;
//                break;
//            case 2: // Subtraction
//                a = rand() % 100 + 1;
//                b = rand() % 100 + 1;
//                cout << "\n  " << a << " - " << b << " = ";
//                cin >> userAnswer;
//                correctAnswer = a - b;
//                if (userAnswer == correctAnswer)
//                    cout << "Correct!" << endl;
//                else
//                    cout << "Incorrect. The answer is " << correctAnswer << "." << endl;
//                break;
//            case 3: // Multiplication
//                a = rand() % 12 + 1;
//                b = rand() % 12 + 1;
//                cout << "\n  " << a << " * " << b << " = ";
//                cin >> userAnswer;
//                correctAnswer = a * b;
//                if (userAnswer == correctAnswer)
//                    cout << "Correct!" << endl;
//                else
//                    cout << "Incorrect. The answer is " << correctAnswer << "." << endl;
//                break;
//            case 4: // Division
//                a = rand() % 144 + 1;
//                b = rand() % 12 + 1;
//                correctAnswerD = static_cast<double>(a) / b;
//                cout << "\n  " << a << " / " << b << " = (rounded to 2 decimal places): ";
//                cin >> userAnswerD;
//                if (abs(userAnswerD - correctAnswerD) < 0.01)
//                    cout << "Correct!" << endl;
//                else
//                    cout << "Incorrect. The answer is " << fixed << setprecision(2) << correctAnswerD << "." << endl;
//                break;
//            case 5:
//                cout << "Goodbye!" << endl;
//                break;
//            default:
//                cout << "Invalid choice. Please select a number between 1 and 5." << endl;
//        }
//    } while (choice != 5);
//    return 0;
//}

