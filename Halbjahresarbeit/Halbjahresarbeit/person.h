#pragma once
#include <string>
#include<iostream>
class Person {
private: 
	std::string pfirstname;
	std::string plastname;
public:
	Person(std::string firstname, std::string lastname);
	std::string getfirstname();
	std::string getlastname();
	std::string getfullname();


};

