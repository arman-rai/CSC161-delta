#include <iostream>
#include <chrono>

#define print(x) std::cout << x << std::endl;

void addMatrix(int* matrix1, int* matrix2, int* result, int rows, int cols) {
    for (int i = 0; i < rows; ++i) { 
        for (int j = 0; j < cols; ++j) {
            result[i * cols + j] = matrix1[i * cols + j] + matrix2[i * cols + j]; // storing directly in *result so it also applies outside the function
        }
    }
}

int main() {
    using namespace std;
    int rows = 2, cols = 2;

    // using new keyword for dynamic mem alloc using pointer
    int* matrix1 = new int[rows * cols];
    int* matrix2 = new int[rows * cols];
    int* result = new int[rows * cols];

    print("Enter the elements of the first matrix: ");
    for (int i = 0; i < rows * cols; ++i) {
        std::cin >> matrix1[i];
    }

    print("Enter the elements of the second matrix: ");
    for (int i = 0; i < rows * cols; ++i) {
        std::cin >> matrix2[i];
    }

    addMatrix(matrix1, matrix2, result, rows, cols);

    print("Resultant matrix after addition: ");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << result[i * cols + j] << " ";
        }
        std::cout << std::endl;
    }

    // Clean up the dynamically allocated memory
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}
