// avoid recursion if the problem does not have a clear base case or a recursive case,
// or if the recursive case does not reduce the problem size significantly.

#include <iostream>
#include <cmath>

double getSumofSquares (double num);

int main() {
    using namespace std;
    double result = getSumofSquares(7.00);
    std::cout << result << std::endl;
    return 0;
} 

double getSumofSquares(double num) {
    if (num > 1) {
        return pow(num, 2) + getSumofSquares(num -1);
    }
    else {
        return 1;
    }
}