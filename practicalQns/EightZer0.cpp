// Write a program to divide any number by some integer which is power of 2. Division must be done
// using bitwise operator.

#include <iostream>
#include <vector>
using namespace std;

#define printLine(x) std::cout << x << std::endl;

std::vector<int> divideByInt2(int number, int powerOf2) {
    std::vector<int> divide;
    int divisor = 1 << powerOf2; // equivalent to 2^powerOf2
    while(number > 0) {
        divide.push_back(number >> powerOf2);
        number--;
    }
    return divide;
}

int main() {
    int number = 0, powerOf2 = 0;
    printLine("Enter a number: ");
    cin >> number;
    printLine("Enter the power of 2 to divide by (e.g., 3 for 2^3 = 8): ");
    cin >> powerOf2;

    auto result = divideByInt2(number, powerOf2);
    for(const auto& value : result) {
        cout << value << " ";
    }
    
    printLine(result[0]);
    return 0;
}
