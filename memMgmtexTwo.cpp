#include <iostream>
#include <vector>

#define print(x) std::cout << x << std::endl;

void addMatrix(const std::vector<int>& matrix1, const std::vector<int>& matrix2, std::vector<int>& result, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i * cols + j] = matrix1[i * cols + j] + matrix2[i * cols + j];
        }
    }
}

int main() {
    using namespace std;
    int rows = 2, cols = 2;
    // Using a Single Vector with Manual Index Calculation for memory efficiency
    // std::vector is a 1D container 
    vector<int> matrix1(rows * cols);
    vector<int> matrix2(rows * cols);
    vector<int> result(rows * cols);

    print("Enter the elements of the first matrix: ");
    for (int i = 0; i < rows * cols; ++i) {
        cin >> matrix1[i];
    }

    print("Enter the elements of the second matrix: ");
    for (int i = 0; i < rows * cols; ++i) {
        cin >> matrix2[i];
    }

    addMatrix(matrix1, matrix2, result, rows, cols);

    print("Resultant matrix after addition: ");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << result[i * cols + j] << " ";
        }
        cout << endl;
    }

    return 0;
}
