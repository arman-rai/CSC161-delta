#include <iostream>
#define print(x) std::cout << x << std::endl;

int main() {
    int varOne = 2024;
    int* pointOne = &varOne; 
    int** pointTwo = &pointOne;

    // print(*pointOne);
    // print(**pointTwo);

    int myArr[] = {1, 5, 6};
    int* pointThree = myArr;
    for (auto& num : myArr)
    {
        print(num);
    }

    print(pointThree) // references the address the pointer is pointing to 
    print(pointThree + 2) // references the address  + 2*4 bytes(size of 1 int element)
    print(*pointThree + 2) // 1(points to the first element)+ 2
    print(*(pointThree + 2)) // prints the pointer pointing to the 3rd element of the addressed array
    return 0;
}