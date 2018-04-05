//Names: Palmer Robins and Hunter Evans
//This is the Person.cpp files, implementing the get and set functions from the header file. 

#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"

Person::Person() {}
Person::Person(const Person& other) {}

Person::Person(int urid, std::string netid, std::string lname, std::string fname, int dob_day, int dob_month, int dob_year, std::string email, std::string address, long phone) {
	 first = fname;
	 last = lname;
	 dob.tm_mday = dob_day;
	 dob.tm_mon = dob_month;
	 dob.tm_year = dob_year - 1900;
	 home = address;
	 URID = urid;
	 NetID = netid;
	 cell = phone;
	 mail = email;
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
	return dob;

}

std::string Person::getAddress() {
	return home;
}

std::string Person::getNetID() {
	return NetID;
}

int Person::getURID() {
	return URID;
}

std::string Person::getEmail() {
	return mail;
}

long Person::getPhone() {
	return cell;
}

//SETTERS
void Person::setFirstName(std::string fname) {
	first = fname;
}

void Person::setLastName(std::string lname) {
	last = lname;
}

//Do not have to worry about the struct here, just use the day month and year variables to reset the person's dob. 
void Person::setDateOfBirth(int month, int day, int year) {
	dob.tm_mday = day;
	dob.tm_mon = month;
	dob.tm_year = year - 1900;
}

void Person::setAddress(std::string address) {
	home = address;
}

void Person::setURID(int urid) {
	URID = urid; 
}

void Person::setNetID(std::string netid) {
	NetID = netid;
}

void Person::setEmail(std::string email) {
	mail = email;
}

void Person::setPhone(long number) {
	cell = number;
}

#endif






















