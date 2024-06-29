#include <iostream>
#include <string>
#include <chrono>
#define print(x) std::cout << x << std::endl;
using namespace std;
// https://www.geeksforgeeks.org/constructors-c/

class college {
    std::string collegeName {""};

    public:
    college () {
        std::getline(std::cin, collegeName);
        print(collegeName); // gets automatically executed at time of creation of object via constructor call

    };

    void display () {
        print(collegeName);
    }
};

int main() {

    college constructorObject;
    // constructorObject.display();
    return 0;
}