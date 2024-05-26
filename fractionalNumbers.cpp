#include <iostream>
#include <iomanip>

// precision 
//     float 7
//     double 15
//     long double > double

int main() {                                                
    float numberOne {1.123123f}; // fixed notation      
    double numberTwo {3.00e5}; // scientific notation
    long double numberThree {1.23123123L};

    std::cout << std::setprecision(10); // controls the precision from std::cout
    std::cout << numberOne << " it's size is " << sizeof(numberOne) << std::endl;
    std::cout << numberTwo << " it's size is " << sizeof(numberTwo) << std::endl;
    std::cout << numberThree << " it's size is " << sizeof(numberThree) << std::endl;

    // infinity and NaN
    double numberFour {};
    double numberFive {};
    double numberSix {numberFour / numberFive};
    std::cout << numberSix << std::endl;
    std::cout << numberThree / numberFour << std::endl; // +ve inf

    return 0;
}