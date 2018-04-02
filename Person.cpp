#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"

Person::Person() {}
Person::Person(const Person& other) {}
Person::Person(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone)
Person::~Person() {}


//GETTER FUNCTIONS
std::string Person::getFirstName() {
	return ""; 
}

std::string Person::getLastName() {
	return "";
}

struct tm Person::getDateOfBirth() {
	return 0;
}

std::string Person::getAddress() {
	return "";
}

std::string Person::getNetID() {
	return "";
}

int Person::getURID() {
	return 0;
}

std::string Person::getEmail() {
	return "";
}

long Person::getPhone() {
	return 0;
}

//SETTERS
void Person::setFirstName(std::string fname) {

}

void Person::setLastName(std::string lname) {

}

void Person::setDateOfBirth(int month, int day, int year) {

}

void Person::setAddress(std::string address) {

}

void Person::setURID(std::string urid) {

}

void Person::setNetID(std::string netid) {

}

void Person::setEmail(std::string email) {

}

#endif






















