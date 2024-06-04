#include "splitFIleOne.hpp"

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
};

void Date::display() {
    std::cout << day << "-" << month << "-" << year << std::endl;
};
