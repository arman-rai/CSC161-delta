// Write a program to input a string and print the string and its reverse. 
// Define your own function to reverse the string

#include <iostream>
#include <cstring>

using namespace std;

void stringReverse(std::string myStr) {
    for(int i = myStr.length(); i>= 0; i--) {
        std::cout << myStr[i-1];
    }
}

int main() {
    std::string myStr;
    std::getline(cin, myStr);

    stringReverse(myStr);
    return 0;
}