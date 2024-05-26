#include <iostream>

int main() {
    
// int - stores decimals, typically 4 bytes or more 
int  countOne; // garbage value (warning)
int countTwo {}; //init to 0
int countThree = 3;
int countFour {countThree + countThree}; // assignment init
// int countFive {countDNE + countDNE}; // compilation error
// int countSix {3.6}; // implicit (narrowing) type conversion
int countSeven (7); // functional init

std::cout << "Size of int : " << sizeof(int) << std::endl;
std::cout << "Size of countSeven : " << sizeof(countSeven) << std::endl;

// integers modifiers : short, long, signed, unsigned, long, long long only work for integral numbers

return 0;
}