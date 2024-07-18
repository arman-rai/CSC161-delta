// Write a program that converts degrees Celsius (TC) to degree Fahrenheit (TF) (Recall that TF =
// (9/5) TC + 32 )

#include <iostream>
using namespace std;

double convertCelciToFahren(double celcius) {
    return ( (9.0/5.0)* celcius + 32);
}

int main() {
    auto converted = convertCelciToFahren(69);
    std::cout << "Converted from celcius to fahrenheit : " << converted << std::endl;
    return 0;
}