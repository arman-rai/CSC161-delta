#include <iostream>

// statements go from top to bottom 

int addNumbers (int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

int main (int argc, char **argv) {
    int firstNumber {22};
    int secondNumber {22};

    int sum = firstNumber + secondNumber;

    std::cout << "The sum is : " << sum << std::endl;
    std::cout << "The sum is : " << addNumbers(2,2) << std::endl;

    return 0;
}