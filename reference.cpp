// datatype& refVar = origiVar; // standard and valid practice
// always init ref at time of declaration
// reference can't be referenced like a pointer
// reference is a basically pointer that can't be referenced again but can be pointed

#include <iostream>
#include <string>

int main() {
    using namespace std;
    std::string originalString = {"appleman"};
    string& refString = originalString;

    std::cout << originalString << std::endl << refString ;

    return 0;
}
