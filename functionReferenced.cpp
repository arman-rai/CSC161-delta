#include <bits/stdc++.h>
#include <chrono>
#include <iostream>
#include <string>
#define print(x) std::cout << x << std::endl;
using namespace std;

int swapNum (int& valOne, int& valTwo);
int swapNumber (int& valOne, int& valTwo);
int swapNumbers (int& valOne, int& valTwo);

int main() {
    auto startTime = chrono::high_resolution_clock::now();

    int numOne {32}, numTwo {36};
    print(numOne);
    print(numTwo);

    swapNumbers(numOne, numTwo);
    print(numOne);
    print(numTwo);

    auto finishTime = chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = finishTime - startTime;
    std::cout << "Execution time: " << duration.count() << " seconds" << std::endl;
    return 0;
}

// Using `const` references prevents the values from being changed 
// If we use pointers, since the address is passed instead of the value,
// a dereference operator * must be used to access the value stored in that address.

int swapNum (int& valOne, int& valTwo) { // fast
    swap(valOne, valTwo);
    return valOne, valTwo;
}

int swapNumber (int& valOne, int& valTwo) { // faster
    valOne = valOne + valTwo;
    valTwo = valOne - valTwo;
    valOne = valOne - valTwo;
    return valOne, valTwo;
}

int swapNumbers (int& valOne, int& valTwo) { // slowest
    int temp;
    temp = valOne;
    valOne = valTwo;
    valTwo = temp;

    return valOne, valTwo;
}