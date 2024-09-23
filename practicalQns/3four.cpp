//Write a program to read all text from a file and display in screen.

#include <iostream>
#include <fstream>  
#include <string>  

using namespace std;

int main() {
    ifstream inputFile("file.txt");
    if (!inputFile) {
        cout << "Error opening file!" << endl;
        return 1; 
    }

    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    inputFile.close();

    return 0;
}
