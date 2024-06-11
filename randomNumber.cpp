#include <iostream>
#include <string>
using namespace std;

int genRandomNumber();

int main() {
    char reply {'y'};
    int result;

    std::cout <<"generate random number ? (y/n) : ";
    std::cin >> reply;

   if (reply =='y')
   {
        result = genRandomNumber();
        
        std::cout << "random number : " << result << std::endl;
   }
   else
   {
        std::cerr << "program not executed successfully" << std::endl;
   }

    return 0;
}

int genRandomNumber() {
    srand(time(0));
    int random = rand();
    return random;
}