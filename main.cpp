#include <iostream>
#include <string>

int main()
{
    int c = 10;
    bool warenviele = false; 
    warenviele = c > 100;
    if (warenviele) {
        std::string schlecht = "Ein massaker";
        std::cout << schlecht;
    }
   else {
        std::string gut = "Ist es ja nochmal gut ausgegangen";
        std::cout << gut;

    }


} 
