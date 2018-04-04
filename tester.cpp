#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
  Person p(29977710, "wr5gk", "Freeman", "James", 7, 4, 1996, "ffreeman@braves.com", "2 Hank Aaron Drive", 8043600327); 


  //Person tests
  std::cout << "========Beginning Person tests========" << std::endl;

  std::cout << std::endl;

  //Get First Name
  std::cout << "Testing First Name Methods. Should equal 'Freddie': " << std::endl;
  p.setFirstName("Freddie");
  std::string fname = p.getFirstName();
  std::cout << fname << std::endl;

  std::cout << std::endl;



  //Student tests
  std::cout << "========Beginning Student tests========" << std::endl;
  Student s(12345678, "jd1yz", "Doe", "Jane", 1, 1, 1995, "jane.doe@richmond.edu",
            8045551212, 1, 5, 2016, AS, false, 0.0);

  s.addCourse("CMSC150");
  s.addCourse("FYS100");
  s.addCourse("MATH211");
  std::cout << "Testing Courses methods:" << std::endl;
  s.printCourses();
  std::cout << "[CMSC150, FYS100]" << std::endl;
  
  
  s.setAdmitDate(1, 5, 2016);
  struct tm admitDate = s.getAdmitDate();
  std::cout << "Testing AdmitDate methods:" << std::endl;
  std::cout << admitDate.tm_mday << ", " << admitDate.tm_mon << ", " <<
               admitDate.tm_year << " [1, 5, 2016]" << std::endl;

  s.setSchool(UNDEFINED);
  School studSchool = s.getSchool();
  std::cout << "Testing School methods:" << std::endl;
  std::cout << studSchool << " [UNDEFINED]" << std::endl;

  s.setGPA(4.0);
  int gpa = s.getGPA();
  std::cout << "Testing GPA methods:" << std::endl;
  std::cout << gpa << " [4.0]" << std::endl;

  s.setUnitsCompleted(2.0);
  double units = s.getUnitsCompleted();
  std::cout << "Testing UnitsCompleted methods:" << std::endl;
  std::cout << units << " [2.0]" << std::endl;

  s.setFullTimeStatus(true);
  bool isFullTime = s.isFullTime();
  std::cout << "Testing isFullTime methods:" << std::endl;
  std::cout << isFullTime << " [true]" << std::endl;  
}
