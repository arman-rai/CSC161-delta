#include <iostream>

// ASCII encoding
// one byte memory : 2^8 = 256 different values (0 to 255)

int main() {
    
    char word = 69;
    std::cout << word << std::endl;
    std::cout << static_cast<int>(word) << std::endl;

return 0;
}