#include <iostream>

//compile time, runtime, warnings

// int main() {
//     std::cout << "Compile time error" << std::endl
//     return 0;
// }

int main() {
    int  runtimeError = 1337/0; 
    std::cout << "Value:" << runtimeError << std::endl; 
    return 0;
}