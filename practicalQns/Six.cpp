// Write a program which accepts days as integer and display total number of years, months and days in
// it. For example : if user input as 856 days the output should be 2 years 4 months 6 days

#include <iostream>
using namespace std;
#define print(x, y) std::cout << x <<  " " << y << std::endl;
class date {
    int years, months, days;
    public:
    date() {
        std::cout << "Enter the number of days : " << std::endl;
        cin >> days;
        this->days = days;
    }

    date(int days) {
        this->days = days;
    }

    void convert() {
        years = days / 365;
        days = days % 365;
        months = days / 30;
        days = days % 30; //remaining days
    }
    
    void displayConverted() {
        print("Years : ", years)
        print("Months : ", months)
        print("Days : ", days)
    }
};

int main() {
    date today;
    // date today(856);
    today.convert();
    today.displayConverted();
    return 0;
}