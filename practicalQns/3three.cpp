// Write a program using class template to implement the stack with different data members integers/characters.
#include <iostream>

using namespace std;

template <typename T>
class Stack {
private:
    static const int MAX = 100; // Maximum size of the stack
    T arr[MAX];                 // Array to store stack elements
    int top;                    // Variable to keep track of the top element

public:
    // Constructor to initialize the top of the stack
    Stack() {
        top = -1;
    }

    // Function to push an element onto the stack
    void push(T value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    // Function to return the top element of the stack
    T peek() {
        if (top < 0) {
            cout << "Stack is Empty!" << endl;
            return 0;
        } else {
            return arr[top];
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    // Stack of integers
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    cout << "Top element of intStack: " << intStack.peek() << endl;
    intStack.pop();
    cout << "Top element of intStack after pop: " << intStack.peek() << endl;

    cout << endl;

    // Stack of characters
    Stack<char> charStack;
    charStack.push('A');
    charStack.push('B');
    charStack.push('C');
    cout << "Top element of charStack: " << charStack.peek() << endl;
    charStack.pop();
    cout << "Top element of charStack after pop: " << charStack.peek() << endl;

    return 0;
}
