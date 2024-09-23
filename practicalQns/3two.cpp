// Write a program that uses a function template for sorting the different data in an array. You can use
// any sorting algorithm in function template

#include <iostream>

using namespace std;

// Function template using Bubble Sort
template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Sorting integers
    int intArr[] = {5, 2, 9, 1, 5, 6};
    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Original integer array: ";
    displayArray(intArr, n1);
    bubbleSort(intArr, n1);
    cout << "Sorted integer array: ";
    displayArray(intArr, n1);
    
    // Sorting floating-point numbers
    float floatArr[] = {3.2f, 1.5f, 7.8f, 0.5f, 2.9f};
    int n2 = sizeof(floatArr) / sizeof(floatArr[0]);
    cout << "\nOriginal float array: ";
    displayArray(floatArr, n2);
    bubbleSort(floatArr, n2);
    cout << "Sorted float array: ";
    displayArray(floatArr, n2);

    // Sorting characters
    char charArr[] = {'z', 'a', 't', 'b', 'q'};
    int n3 = sizeof(charArr) / sizeof(charArr[0]);
    cout << "\nOriginal char array: ";
    displayArray(charArr, n3);
    bubbleSort(charArr, n3);
    cout << "Sorted char array: ";
    displayArray(charArr, n3);

    return 0;
}
