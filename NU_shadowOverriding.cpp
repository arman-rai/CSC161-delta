#include <iostream>
#include <string>
// #include "randomNumber.cpp"
using namespace std;    

class opaqueClass {
        public:
        int magicalNumber {21}, anotherMagicalNumber;
        void printNumber() {
            std::cout << "magical number : " << magicalNumber << std::endl;
        };
};

class shadowClass : public opaqueClass {
    int magicalNumber {30};
    public:
        void printNumber() {
            std::cout << "magical sankhya : " << magicalNumber << std::endl;
            opaqueClass::printNumber();
        };
};

int main() {
    shadowClass shadowOne;
    shadowOne.opaqueClass::printNumber();
    shadowOne.printNumber();

    return 0;
}