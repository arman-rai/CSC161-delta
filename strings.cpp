
// C strings and string object
// find()	Find a substring in the string.
// rfind()	Find the last occurrence of a substring in the string. 
// append()	Append to the string.
// insert()	Insert into the string.
// erase()	Erase characters from the string.
// replace()	Replace portions of the string.
// compare()	Compare two strings.

#include <iostream>
#include <string>

void findWords(std::string); 
int main() {
    using namespace std;

    string myStr;
    findWords(myStr);

    return 0;
}

void findWords(std::string myStr) {
    std::string myArr[] = {};
    for(char&  c : myStr) {
        myArr.push_back(c);
    }

    std::cout << myArr
}