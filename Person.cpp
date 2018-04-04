#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"

Person::Person() {}
Person::Person(const Person& other) {}

Person::Person(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone)

Person::Person(int urid, int netid, std::string lname, std::string fname, int dob_day, int dob_month, int dob_year, std::string email, std::string address, long phone) {
	 first = fname;
	 last = lname;
}

Person::~Person() {}


//GETTER FUNCTIONS
std::string Person::getFirstName() {

	return first; 
}

std::string Person::getLastName() {
	return last;
}

struct tm Person::getDateOfBirth() {
	struct tm dob;
	dob.tm_mday = 0;
	dob.tm_mon = 0;
	dob.tm_year = 0;
	return dob;

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

void Person::setURID(int urid) {

}

void Person::setNetID(std::string netid) {

}

void Person::setEmail(std::string email) {

}

#endif






















