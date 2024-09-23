// Write a program defining a class matrix with data element as two dimensional matrix , row and col
// as integer. Define the member functions read() to read the value of matrices and show() to display the
// matrix objects. Overload the operator + to add two matrix objects and also overload the operator * to
// multiply the two matrix objects. Input the two matrices object and compute sum and product of
// matrices using the operators and show the result

#include <iostream>

using namespace std;

class Matrix {
    int row, col;

public:
    void readMatrix() {
        cout << "Enter the row and column : " << endl;
        cin >> row >> col;
    }

    void showMatrix() {
        cout << "Row : " << row << ", Column : " << col << endl;
    }

    Matrix operator+(Matrix& m) {
        Matrix result;
        result.row = this->row + m.row;
        result.col = this->col + m.col;
        return result;
    }

    Matrix operator*(Matrix& m) {
        Matrix result;
        result.row = this->row * m.row;
        result.col = this->col * m.col;
        return result;
    }
};

int main() {
    Matrix mOne, mTwo, mThree, mFour;
    mOne.readMatrix();
    mTwo.readMatrix();

    mThree = mOne.operator+(mTwo);
    mFour = mOne.operator*(mTwo);

    mThree.showMatrix();
    mFour.showMatrix();

    return 0;
}