//#include <iostream>
//#include <string>
//#include <bitset>
//#include <limits>
//#include <sstream>
//
//void showMenu();
//void convertNumberSystems();
//void addOrSubtract();
//std::string hexToBinary(const std::string& hex);
//std::string binaryToHex(const std::string& bin);
//std::string decimalToBinary(const std::string& dec);
//std::string binaryToDecimal(const std::string& bin);
//void pause();
//
//int main() {
//    int choice;
//    do {
//        showMenu();
//        std::cin >> choice;
//        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//        switch (choice) {
//            case 1:
//                convertNumberSystems();
//                break;
//            case 2:
//                addOrSubtract();
//                break;
//            case 3:
//                std::cout << "Exiting program.\n";
//                break;
//            default:
//                std::cout << "Invalid choice. Try again.\n";
//        }
//    } while (choice != 3);
//    return 0;
//}
//
//void showMenu() {
//    std::cout << "\n==== Main Menu ====" << std::endl;
//    std::cout << "1. Convert Number Systems" << std::endl;
//    std::cout << "2. Add or Subtract Hex/Binary" << std::endl;
//    std::cout << "3. Quit" << std::endl;
//    std::cout << "Select an option: ";
//}
//
//void convertNumberSystems() {
//    int subChoice;
//    std::cout << "\n1. Hex to Binary\n2. Binary to Hex\n3. Decimal to Binary\n4. Binary to Decimal\nSelect conversion: ";
//    std::cin >> subChoice;
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    if (subChoice == 1) {
//        std::string hex;
//        std::cout << "Enter hex value (no 0x): ";
//        std::getline(std::cin, hex);
//        std::cout << "Binary: " << hexToBinary(hex) << std::endl;
//    } else if (subChoice == 2) {
//        std::string bin;
//        std::cout << "Enter binary value: ";
//        std::getline(std::cin, bin);
//        std::cout << "Hex: " << binaryToHex(bin) << std::endl;
//    } else if (subChoice == 3) {
//        std::string dec;
//        std::cout << "Enter decimal value: ";
//        std::getline(std::cin, dec);
//        std::cout << "Binary: " << decimalToBinary(dec) << std::endl;
//    } else if (subChoice == 4) {
//        std::string bin;
//        std::cout << "Enter binary value: ";
//        std::getline(std::cin, bin);
//        std::cout << "Decimal: " << binaryToDecimal(bin) << std::endl;
//    } else {
//        std::cout << "Invalid selection." << std::endl;
//    }
//    pause();
//}
//
//std::string hexToBinary(const std::string& hex) {
//    unsigned long val = std::stoul(hex, nullptr, 16);
//    std::bitset<32> b(val);
//    std::string bin = b.to_string();
//    if (val == 0) return "0";
//    return bin.substr(bin.find('1'));
//}
//
//std::string binaryToHex(const std::string& bin) {
//    unsigned long val = std::stoul(bin, nullptr, 2);
//    std::stringstream ss;
//    ss << std::hex << val;
//    return ss.str();
//}
//
//std::string decimalToBinary(const std::string& dec) {
//    unsigned long val = std::stoul(dec, nullptr, 10);
//    std::bitset<32> b(val);
//    std::string bin = b.to_string();
//    if (val == 0) return "0";
//    return bin.substr(bin.find('1'));
//}
//
//std::string binaryToDecimal(const std::string& bin) {
//    unsigned long val = std::stoul(bin, nullptr, 2);
//    return std::to_string(val);
//}
//
//void addOrSubtract() {
//    int subChoice;
//    std::cout << "\n1. Hex\n2. Binary\nSelect type: ";
//    std::cin >> subChoice;
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    int op;
//    std::cout << "1. Add\n2. Subtract\nSelect operation: ";
//    std::cin >> op;
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    std::string a, b;
//    if (subChoice == 1) {
//        std::cout << "Enter first hex value (no 0x): ";
//        std::getline(std::cin, a);
//        std::cout << "Enter second hex value (no 0x): ";
//        std::getline(std::cin, b);
//        unsigned long x = std::stoul(a, nullptr, 16);
//        unsigned long y = std::stoul(b, nullptr, 16);
//        unsigned long result = (op == 1) ? (x + y) : (x - y);
//        std::cout << "Result (hex): " << std::hex << result << std::endl;
//    } else if (subChoice == 2) {
//        std::cout << "Enter first binary value: ";
//        std::getline(std::cin, a);
//        std::cout << "Enter second binary value: ";
//        std::getline(std::cin, b);
//        unsigned long x = std::stoul(a, nullptr, 2);
//        unsigned long y = std::stoul(b, nullptr, 2);
//        unsigned long result = (op == 1) ? (x + y) : (x - y);
//        std::bitset<32> bres(result);
//        std::string bin = bres.to_string();
//        if (result == 0) {
//            std::cout << "Result (binary): 0" << std::endl;
//        } else {
//            std::cout << "Result (binary): " << bin.substr(bin.find('1')) << std::endl;
//        }
//    } else {
//        std::cout << "Invalid type selection." << std::endl;
//    }
//    pause();
//}
//
//void pause() {
//    std::cout << "Press Enter to return to menu...";
//    std::string dummy;
//    std::getline(std::cin, dummy);
//    while (!dummy.empty()) {
//        std::cout << "Please press only Enter to return to menu...";
//        std::getline(std::cin, dummy);
//    }
//}