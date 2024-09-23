// Write a program showing the example of aggregation.

#include <iostream>, <string>

using namespace std;

class Person {
public:
    Person(std::string name) : name(name), address(nullptr) {}
    void setAddress(Address* address) {
        this->address = address;
    }
private:
    std::string name;
    Address* address;
};

class Address {
public:
    Address(std::string street, std::string city, std::string state, std::string zip)
        : street(street), city(city), state(state), zip(zip) {}
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;
};

int main() {
    Address* address = new Address("123 Main St.", "Anytown", "CA", "12345");
    Person person("John Doe");
    person.setAddress(address);
    return 0;
}