#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include <list>
#include "Person.h"
#include "Student.h"

Student::Student() {
}

Student::Student(const Student& other) {

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
}

Student::~Student() {

}

std::list<std::string> getCourses() {

}

void addCourse(std::string course) {

}

void removeCourse(std::string course) {

}

void printCourses() {

}

void setCourses(std::list<std::string> courses) {

}

void clearCourses() {

}

struct tm getAdmitDate() {
  struct tm admitDate;
  admitDate.tm_mday = admit_day;
  admitDate.tm_mon = admit_month;
  admitDate.tm_year = admit_year - 1900;
  return admitDate;
}

Student::School getSchool() {
  return sch;
}

double getGPA() {
  return stud_gpa;
}

double getUnitsCompleted() {
  return completed_units;
}

bool isFullTime() {
  return full_time;
}

void setAdmitDate(int day, int month, int year) {
	admit_day = day;
	admit_month = month;
	admit_year = year;
}

void setSchool(Student::School school) {
	sch = school;
}

void setGPA(double gpa) {
	stud_gpa = gpa;
}

void setUnitsCompleted(double units) {
	completed_units = units;
}

void setFullTimeStatus(bool isFullTime) {
	full_time = isFullTime;
}

#endif
