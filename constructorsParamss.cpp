#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class entry {
    int ID = 45;
    std::string fullName {""};
    // char fullName[50];

public:

    entry(std::string name = {"defaultName"}, int code = {69}) : fullName(name), ID(code) {
        std::getline(std::cin, fullName);
        // std::cin >> fullName[50]; //doesn't quite work

        std::cin >> ID;
        // Clear the newline character left in the input buffer by std::cin
        // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        code = ID;
        // strcpy(fullName, name); // only works for c style strings
        name = fullName;
    }

    void displayInfo() {
        std::cout << std::to_string(ID) << " | " << fullName << std::endl;
    }
};
int main() {

    entry numberOne("Appleman", 69569);
    numberOne.displayInfo();
    return 0;
}