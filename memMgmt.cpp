#include <iostream>
#include <chrono>
#define print(x) std::cout << x << std::endl;
#define printExecTime(x) std::cout << "Execution time : " << x << " seconds" << std::endl;

int main() {
    using namespace std;
    auto startTime = chrono::high_resolution_clock::now();

    // data_type* pointer_variable = new data_type{value}; // mem alloc syntax
    auto* pointerOne = new auto {5678.172}; // alloc
    print(pointerOne);
    delete pointerOne; // dealloc
    pointerOne = nullptr; // realloc

    // Not deallocating memory properly can cause memory leaks 
    // which in turn causes the program to consume a large amount of memory

    auto finishTime = chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = finishTime - startTime;
    printExecTime(duration.count());
    return 0;
}