//  Write a program to input string number. 
// Convert the string into number. Do not use any library.
#include <iostream>
using namespace std;
#define print(x) std::cout << x << std::endl;

int strToNum(std::string myStr) {
    int result = 0;
    for (char ch: myStr) {
        result = result*10 + ch-'0'; // char - 48('0') gives the resulting integer
    }
    return result;
}

int main () {
    std::string myStr {"789"};
    int result = strToNum(myStr);
    print(result);
    return 0;
}
