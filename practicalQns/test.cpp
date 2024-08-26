#include <iostream>

using namespace std;

void swap(int& i, int& j) {
    int temp = i;
    i = j;
    j = temp;
}

// Function to partition the array around the pivot
int partition(int* myArr, int left, int right) {
    int pivot = myArr[right]; // Choosing the last element as pivot
    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (myArr[j] <= pivot) {
            i++;
            swap(myArr[i], myArr[j]);
        }
    }
    swap(myArr[i + 1], myArr[right]);
    return i + 1;
}

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    int* myArr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> myArr[i];
    }

    int index;
    std::cout << "Enter index of the element to reposition around: ";
    std::cin >> index;

    if (index < 0 || index >= n) {
        std::cout << "Invalid index!" << std::endl;
        delete[] myArr;
        return 1;
    }

    // Move the pivot element to the end for partitioning
    swap(myArr[index], myArr[n - 1]);

    // Partition the array around the chosen pivot
    int pivotIndex = partition(myArr, 0, n - 1);

    std::cout << "Array after partitioning around index " << index << ": ";
    for (int i = 0; i < n; i++) {
        std::cout << myArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] myArr;
    return 0;
}
