// Write a C++ program to print the following output. You must use manipulators such as left, right,
// setw, endl for formatting, The population column is right aligned.
#include <iostream>
#include "iomanip"

int main() {
    using namespace std;
    std::cout << std::left << std::setw(7) << "Num " 
              << std::setw(15) << "City " 
              << std::setw(15) << "District" 
              << std::setw(15) << "Province" 
              << std::right << std::setw(10) << "Population" << std::endl;
    
    std::cout << "--------------------------------------------------------------" << std::endl;
    
    std::cout << std::left << std::setw(7) << "1" 
              << std::setw(15) << "Kathmandu" 
              << std::setw(15) << "Kathmandu" 
              << std::setw(15) << "Bagmati" 
              << std::right << std::setw(10) << "50000" << std::endl;

    std::cout << std::left << std::setw(7) << "2" 
              << std::setw(15) << "Pokhara" 
              << std::setw(15) << "Kaski" 
              << std::setw(15) << "Gandaki" 
              << std::right << std::setw(10) << "50000" << std::endl;

    std::cout << std::left << std::setw(7) << "3" 
              << std::setw(15) << "Butwal" 
              << std::setw(15) << "Rupandehi" 
              << std::setw(15) << "Lumbini" 
              << std::right << std::setw(10) << "100000" << std::endl;

    std::cout << std::left << std::setw(7) << "4" 
              << std::setw(15) << "Dharan" 
              << std::setw(15) << "Sunsari" 
              << std::setw(15) << "Madhesh" 
              << std::right << std::setw(10) << "80000" << std::endl;

    return 0;
}
