#include <iostream>
#include <string>

int main () {

    std::cout << "printing to the console" << std::endl;

    // std::cerr << "std::cerr output : something's wrong I can feel it" << std::endl;
    // std::clog << "std::clog output : This is a log message" << std::endl;

    int mobileNumber;
    std::string fullName;

    std::cout << "Enter full name" << std::endl;
    std::getline(std::cin, fullName); // inputting with spaces in the string
    std::cout << "Enter mobile number: " << std::endl;
    std::cin >> mobileNumber;

    std::cout << "i'm " << fullName << " call me baby " << mobileNumber << std::endl;
    std::cout << "Size of int : " << sizeof(int) << std::endl;

    return 0;
}