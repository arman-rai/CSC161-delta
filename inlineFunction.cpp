#include <iostream>
#include <cmath>

inline int sqNumbers(int index, int exp) {
        return pow(index, exp);
    }

int main() {
    using namespace std;
    int index, exp;

    std::cout << "Enter index and exponential : " ;
    cin >> index >> exp;

    int result = sqNumbers(index, exp);
    std::cout << "Result is : " << result << std::endl;
    return 0;
}