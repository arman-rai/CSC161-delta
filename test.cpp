#include <iostream>
#include <cmath>

double getSumofSquares(double num);

int main() {
    double result = getSumofSquares(7.00);
    std::cout << "Sum of squares: " << result << std::endl;

    return 0;
}

double getSumofSquares(double num) {
    if (num > 1) {
        return pow(num, 2) + getSumofSquares(num - 1);
    } else {
        return 1; // Base case to terminate recursion
    }
}
