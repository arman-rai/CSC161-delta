#include <iostream>
#include <string>
using namespace std;
#define print(x) std::cout << x << std::endl;

class Book {
    std::string bookName;
    int bookISBN;

public:
    Book () {
        
    }

    Book(std::string Name, int ISBN) : bookName(Name),  bookISBN(ISBN) {
        
    }

    void display() {
        print(bookName);
        print(bookISBN)
    }
};

int main() {

    Book* ptr = new Book();
    ptr->display();
    return 0;
}