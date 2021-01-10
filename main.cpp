#include <iostream>
#include <string>

int main()
{
    int c = 500;
    bool warenviele = true; 
    warenviele = c > 100;
    if (warenviele) {
        std::string schlecht = "Ein massaker";
        std::cout << schlecht;
    }


} 
