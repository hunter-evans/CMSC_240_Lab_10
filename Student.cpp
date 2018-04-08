#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include <iostream>
#include <list>
#include "Person.h"
#include "Student.h"

Student::Student() : Person() {
	admit_day = 0;
	admit_month = 0;
	admit_year = 0;
	sch = Student::UNDEFINED;
	full_time = false;
	completed_units = 0.0;
	stud_gpa = 0.0;
}

Student::Student(const Student& other) : Person(other) {
	admit_day = other.admit_day;
        admit_month = other.admit_month;
        admit_year = other.admit_month;
        sch = other.sch;
        full_time = other.full_time;
        completed_units = other.completed_units;
        stud_gpa = other.stud_gpa;
}

Student::Student(int urid, std::string netid, std::string lname, std::string fname,
               int dob_day, int dob_mo, int dob_yr,
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               Student::School school, bool is_full_time,
               double units_completed) : Person(urid, netid, lname, fname, dob_day,
						dob_mo, dob_yr, email, address,
						phone) {
	admit_day = day_admit;
	admit_month = month_admit;
	admit_year = year_admit;
	sch = school;
	full_time = is_full_time;
	completed_units = units_completed;
	stud_gpa = 0.0;
}

Student::~Student() {

}

std::list<std::string> Student::getCourses() {
	return stud_courses;
}

void Student::addCourse(std::string course) {
	stud_courses.push_front(course);
}

void Student::removeCourse(std::string course) {
	stud_courses.remove(course);
}

void Student::printCourses() {
	for(std::list<std::string>::iterator it = stud_courses.begin(); it != stud_courses.end(); ++it) {
		std::cout << " " << *it;
	}
	std::cout << std::endl;
}

void Student::setCourses(std::list<std::string> courses) {
	while(courses.size() != 0) {
		stud_courses.push_front(courses.front());
		courses.pop_front();
	}
}

void Student::clearCourses() {
	stud_courses.clear();
}

struct tm Student::getAdmitDate() {
	struct tm admitDate;
	admitDate.tm_mday = admit_day;
	admitDate.tm_mon = admit_month;
	admitDate.tm_year = admit_year - 1900;
	return admitDate;
}

Student::School Student::getSchool() {
	return sch;
}

double Student::getGPA() {
	return stud_gpa;
}

double Student::getUnitsCompleted() {
	return completed_units;
}

bool Student::isFullTime() {
	return full_time;
}

void Student::setAdmitDate(int day, int month, int year) {
	admit_day = day;
	admit_month = month;
	admit_year = year;
}

void Student::setSchool(Student::School school) {
	sch = school;
}

void Student::setGPA(double gpa) {
	stud_gpa = gpa;
}

void Student::setUnitsCompleted(double units) {
	completed_units = units;
}

void Student::setFullTimeStatus(bool isFullTime) {
	full_time = isFullTime;
}

#endif
