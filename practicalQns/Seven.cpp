// Write a program to input an integer and print its binary digits
#include <iostream>
#include <bitset>
using namespace std;
#define printLine(x) std::cout << x << std::endl;
#define print(x, y) std::cout << x <<  " " << y << std::endl;

std::string intToBits(int number) {
    std::string binary = std::bitset<8>(number).to_string();
    return binary;
}

int main() {
    auto  number = 0;
    std::string result;
    printLine("Enter an integer : ");
    cin >> number;
    result = intToBits(number);
    print("Binary digits : ", result);
    return 0;
}