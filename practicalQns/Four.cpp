// Write a program which accepts a character and display its ASCII value.
#include <iostream>
#include <string>
using namespace std;
#define print(x) std::cout << x << std::endl;

void displayASCII(char word) {
    // char asc = static_cast<int>(word);
    // print(asc);
    print((int)word);
}

int main () {
    char word;
    print("Enter a character to convert to ASCII value : ");
    std::cin >> word;
    displayASCII(word);

    return 0;
}