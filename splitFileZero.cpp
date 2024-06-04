#include <iostream>
#include <string>
using namespace std;

class Date {
    int day, month, year;
    public:
        Date(int day = 1,int month = 1,int year = 2001);
        void display();
};

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
};

void Date::display() {
    std::cout << day << "-" << month << "-" << year << std::endl;
};

int main() {

    Date promotionDay(1, 8, 2023);
    promotionDay.display();
    return 0;
}

