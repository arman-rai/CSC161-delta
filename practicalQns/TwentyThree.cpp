#include <iostream>
using namespace std;

class Fahrenheit {
public:
    double f;

    friend istream& operator>>(istream& in, Fahrenheit& obj) {
        cout << "Enter temperature in Fahrenheit: ";
        in >> obj.f;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Fahrenheit& obj) {
        out << "Temperature in Fahrenheit: " << obj.f;
        return out;
    }
};

class Celsius {
public:
    double c;

    friend istream& operator>>(istream& in, Celsius& obj) {
        cout << "Enter temperature in Celsius: ";
        in >> obj.c;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Celsius& obj) {
        out << "Temperature in Celsius: " << obj.c;
        return out;
    }

   void convertFtoC(const Fahrenheit& fObj) {
        c = (fObj.f - 32) * 5 / 9;
    }
};

int main() {
    Fahrenheit fOne;
    Celsius cOne;

    cin >> fOne;
    cout << fOne << endl;
    cOne.convertFtoC(fOne);
    cout << cOne << endl;
    return 0;
}
