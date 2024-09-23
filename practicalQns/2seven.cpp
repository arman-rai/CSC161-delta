// Create a class Animal with virtual method makeSound(). Leave the method to be blank. Create two
// classes Dog and Cat inheriting Animal. Override the method makeSound() to display”Bark” and “Meow”
// in their respective classes. In main, create pointer of Animal , point to the object of Dog and call the
// method MakeSound(). Finally point to the object of Cat and call the makeSound() method.

#include <iostream>

using namespace std;

class Animal {
public:
    virtual void makeSound() { 
    }
};

class Dog : public Animal {
public:
    void makeSound() override { 
        cout << "Bark" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override { 
        cout << "Meow" << endl;
    }
};

int main() {
    Animal* animalPointer;

    Dog dog;
    animalPointer = &dog;
    animalPointer->makeSound(); 

    Cat cat;
    animalPointer = &cat;
    animalPointer->makeSound(); 

    return 0;
}
