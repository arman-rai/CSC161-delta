// Question 31

#include <iostream>
using namespace std;

class General {
protected:
    float rate;
    float value;
public:
    virtual void setRate(float r) = 0;
    virtual void setValue() = 0;
    virtual void displayValue() {
        cout << "Value: " << value << endl;
    }
    float getRate() const {
        return rate;
    }
    float getValue() const {
        return value;
    }
    void setRateValue(float r, float v) {
        rate = r;
        value = v;
    }
};

class Source : virtual public General {
public:
    void setRate(float r) override {
        rate = r;
    }
    float operator*() {
        return rate * value;
    }
};

class Destination : virtual public General {
public:
    Destination() {
        rate = 0;
        value = 0;
    }
    Destination(Source& src) {
        rate = src.getRate();
        value = src.getValue();
    }
};

class Inch : public Source, public Destination {
public:
    void setValue() override {
        cout << "Enter value in inches: ";
        cin >> value;
    }
};

class Feet : public Source, public Destination {
public:
    void setValue() override {
        cout << "Enter value in feet: ";
        cin >> value;
    }
};

void convertUnit(Source& src, Destination& dest) {
    dest.setRateValue(src.getRate(), src.getRate() * src.getValue());
}

void inchToFeet() {
    Inch inch;
    inch.setValue();
    inch.setRate(1.0 / 12.0);
    Feet feet;
    convertUnit(inch, feet);
    feet.displayValue();
}

void feetToInch() {
    Feet feet;
    feet.setValue();
    feet.setRate(12.0);
    Inch inch;
    convertUnit(feet, inch);
    inch.displayValue();
}

int main() {
    int choice;
    do {
        cout << "Menu:\n1. Inch to Feet\n2. Feet to Inch\n3. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                inchToFeet();
                break;
            case 2:
                feetToInch();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);
    return 0;
}
