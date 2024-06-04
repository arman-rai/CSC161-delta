#include <iostream>
#include <string>
// #include "randomNumber.cpp"
using namespace std;    

class opaqueClass {
    int magicalNumber {21};
    public:
        void printNumber() {
            std::cout << "magical number : " << magicalNumber << std::endl;
        };
};

class shadowClass : public opaqueClass {
    int magicalNumber {30};
    public:
        void printNumber() {
            std::cout << "magical number : " << magicalNumber << std::endl;
        };
};

int main() {
    shadowClass shadowOne;
    shadowOne.printNumber();

    return 0;
}