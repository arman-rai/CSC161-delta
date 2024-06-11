#include <iostream>
#include <chrono>
using namespace std;

void printFibo(int num);

int main() {
    auto startTime = chrono::high_resolution_clock::now();

    int num;
    std::cout << "Enter number up to which Fibonacci numbers are printed: " << std::endl;
    std::cin >> num;

    printFibo(num);

    auto finishTime = chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = finishTime - startTime;
    std::cout << "Execution time: " << duration.count() << " seconds" << std::endl;
    return 0;
}

void printFibo(int num) {
    int first = 0, second = 1;

    if (num < 1) return;

    std::cout << first << " ";
    if (num >= 2) {
        std::cout << second << " ";
    }

    for (int i = 3; i <= num; ++i) {
        int next = first + second;
        std::cout << next << " ";
        first = second;
        second = next;
    }
    std::cout << std::endl;
}
