#include <iostream>
#include <string>
#include "hello.h"
#include "person.h"



int main()
{
    Person leo(std::string("Leo "), std::string("Quensel"));
    Person moritz(std::string("Moritz"), std::string("Thiele"));
    std::cout << leo.getfullname();
    

    }


