#include <iostream>

int main() {
    
    bool redLight {false};
    bool greenLight {true};

    if (greenLight)
    {
        std::cout << "go go go!" << std::endl;
    } else {
        std::cout << "stop wait a minute" << std::endl;
    }
    
    std::cout << "greenLight : " << greenLight << std::endl;
    std::cout << std::boolalpha; // syncs 0 to false and 1 to true
    std::cout << "greenLight : " << greenLight << std::endl;
    std::cout << "size of greenLight : " << sizeof(greenLight) << std::endl;

return 0;
}