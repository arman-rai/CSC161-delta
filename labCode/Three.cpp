//  Write a program to input x and print its equivalent y.

#include <iostream>
#include <math.h>
#define e 2.718282
#define print(x) std::cout << x << std::endl;
using namespace std;

double functionOne(double x) {
    return (pow(x, 2) + sqrt(x));
}

double functionTwo(double x) {
    return (1 - pow(e, x));
}

double functionThree(double x) {
    return abs(x + 5);
}

int main() {
    double x {0}; 
    print("Enter the value for x : ");
    std::cin >> x;

    if (x >= 0) {
        print(functionOne(x));
    }
    else if (x > -10 && x < 0) {
        print(functionTwo(x));
    }
    else if (x <= -10) {
        print(functionThree(x));
    }

    return 0;
}