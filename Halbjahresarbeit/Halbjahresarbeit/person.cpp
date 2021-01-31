#include "person.h"

Person::Person(std::string firstname, std::string lastname) {
	pfirstname = firstname;
	plastname = lastname;
}
std::string Person::getfirstname() {
	return pfirstname;
}
std::string Person::getlastname() {
	return plastname;

}
std::string Person::getfullname() {
	std::string fullname = pfirstname + plastname;
	return fullname;
}