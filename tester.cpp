#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
  //Person tests
  std::cout << "========Beginning Person tests========" << std::endl;


  //Student tests
  std::cout << "========Beginning Student tests========" << std::endl << std::endl;
  Student s(12345678, "jd1yz", "Doe", "Jane", 1, 1, 1995, "jane.doe@richmond.edu",
	    "123 Main Street", 8045551212, 1, 5, 2016, Student::AS, false, 0.0);


  std::cout << "====Testing Courses methods:====" << std::endl;
  std::cout << "==setCourses() and printCourses()==" << std::endl;
  std::list<std::string> course_list;
  course_list.push_front("MATH211");
  course_list.push_front("FYS100");
  course_list.push_front("CMSC150");
  s.setCourses(course_list);
  s.printCourses();
  std::cout << "[MATH211, FYS100, CMSC150]" << std::endl;

  std::cout << "==addCourse()==" << std::endl;
  s.addCourse("CHEM141");
  s.printCourses();
  std::cout << "[CHEM141, MATH211, FYS100, CMSC150]" << std::endl;

  std::cout << "==removeCourse()==" << std::endl;
  s.removeCourse("FYS100");
  s.printCourses();
  std::cout << "[CHEM141, MATH211, CMSC150]" << std::endl;

  std::cout << "==clearCourses()==" << std::endl;
  s.clearCourses();
  s.printCourses();
  std::cout << "[no courses should be listed]" << std::endl << std::endl;
  
  
  std::cout << "Testing AdmitDate methods:" << std::endl;
  s.setAdmitDate(1, 5, 2016);
  struct tm admitDate = s.getAdmitDate();
  std::cout << admitDate.tm_mday << ", " << admitDate.tm_mon << ", " <<
               admitDate.tm_year << " [1, 5, 2016]" << std::endl;

  std::cout << "Testing School methods:" << std::endl;
  s.setSchool(Student::UNDEFINED);
  Student::School studSchool = s.getSchool();
  std::cout << studSchool << " [UNDEFINED or 5]" << std::endl;

  std::cout << "Testing GPA methods:" << std::endl;
  s.setGPA(4.0);
  int gpa = s.getGPA();
  std::cout << gpa << " [4.0]" << std::endl;

  std::cout << "Testing UnitsCompleted methods:" << std::endl;
  s.setUnitsCompleted(2.0);
  double units = s.getUnitsCompleted();
  std::cout << units << " [2.0]" << std::endl;

  std::cout << "Testing isFullTime methods:" << std::endl;
  s.setFullTimeStatus(true);
  bool isFullTime = s.isFullTime();
  std::cout << isFullTime << " [true or 1]" << std::endl;  
}
