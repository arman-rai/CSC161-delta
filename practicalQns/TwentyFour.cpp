// Create a class Animal with data members name, age, color, noOfLegs. Include a method getData() to
// input data of the class. Create a class Cat inheriting Animal. Also include showData() method in class Cat
// to show the data

#include <iostream>

using namespace std;

class Animal {
protected:
    string name, color;
    int age, noOfLegs;

public:
    void getData() {
        cout << "Enter the name and color of the animal : " << endl;
        cin >> name >> color;
        cout << "Enter the age and number of legs : " << endl;
        cin >> age >> noOfLegs;
    }
    
};

class Cat : public Animal {

public:
    void showData() {
        cout << "Data : " << endl;
        cout << "Name : " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Age: " << age << endl;
        cout << "Number of Legs: " << noOfLegs << endl;
    }
};

int main() {
    Cat tom;
    tom.getData();
    tom.showData();

    return 0;
}