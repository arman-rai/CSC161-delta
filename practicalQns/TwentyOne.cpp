#include <iostream>
#include <cstring>

using namespace std;

class Distance {
    int feet, inch;

public:
    Distance() {
        feet = 0;
        inch = 0;
    }

    Distance(int feet, int inch) {
        this->feet = feet;
        this->inch = inch;
    }

    Distance operator+(Distance& d) {
        Distance result;
        result.inch = inch + d.inch;
        result.feet = feet + d.feet + result.inch / 12;
        result.inch %= 12;
        return result;
    }

    void displayDistance() const {
        cout << "Feet : " << feet << ", Inches : " << inch << endl;
    }
};

class String {
    char str[50]; 

public:
    String() {
        strcpy(str, "");
    }

    String(const char* s) {
        strcpy(str, s);
    }

    String operator+(String& s) {
        String result;
        strcpy(result.str, str);
        strcat(result.str, s.str);
        return result;
    }

    void displayChar() const {
        cout << "String : " << str << endl;
    }
};

int main() {
    Distance dOne(9, 11), dTwo(6, 9), dThree;
    dThree = dOne + dTwo;  
    dThree.displayDistance();

    String sOne("apple"), sTwo("man"), sThree;
    sThree = sOne + sTwo; 
    sThree.displayChar();

    return 0;
}
