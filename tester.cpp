#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
  Person p(27799920, "wr5gk", "Jameson", "James", 8, 2, 1967, "ajudge99@yankees.com", "8801 Bellefonte Road", 8043600327); 

  std::cout << std::endl;

  //Person tests
  std::cout << "========Beginning Person tests========" << std::endl;

  std::cout << "Constructed Person p." << std::endl;
  std::cout << "Person p(27799920, 'wr5gk', 'Jameson', 'James', 8, 2, 1967, 'ajudge99@yankees.com', '8801 Bellefonte Road', 8043600327)." << std::endl; 

  std::cout << std::endl;

  //Get First Name
  std::cout << "Testing First Name Methods (p.setFirstName('Freddie')). Should equal [Freddie]: " << std::endl;
  p.setFirstName("Freddie");
  std::cout << p.getFirstName() << std::endl;

  std::cout << std::endl;

  std::cout << "Testing Last Name Methods (p.setLastName('Freeman')). Expecting [Freeman]: " << std::endl;
  p.setLastName("Freeman");
  std::cout << p.getLastName() << std::endl;

  std::cout << std::endl;

  std::cout << "Testing Date of Birth Methods (p.setDateOfBirth(7, 4, 1996)). Expecting... Month = 7, Day = 4, Year = 1996: " << std::endl;
  p.setDateOfBirth(7, 4, 1996);
  struct tm newdob = p.getDateOfBirth();
  //Since we can't print a struct directly, we simply have to print each specific value within that struct
  //One for the day, month, and year. 
  std::cout << "Month: " << newdob.tm_mon << "  Day: " << newdob.tm_mday << "  Year: " << newdob.tm_year + 1900 << std::endl; 

  std::cout << std::endl;

  std::cout << "Testing Address Methods (p.setAddress('200 Chipper Jones Drive')). Expecting [200 Chipper Jones Drive]: " << std::endl;
  p.setAddress("200 Chipper Jones Drive");
  std::cout << p.getAddress() << std::endl << std::endl;

  std::cout << "Testing URID Methods (p.setURID(29977710)). Expecting '29977710': " << std::endl;
  p.setURID(29977710);
  std::cout << p.getURID() << std::endl;

  std::cout << std::endl;

  std::cout << "Testing NETID Methods (p.setNetID('ff5ff')). Expecting [ff5ff]: " << std::endl;
  p.setNetID("ff5ff");
  std::cout << p.getNetID() << std::endl;

  std::cout << std::endl;

  std::cout << "Testing Phone Methods (p.setPhone(8042294646)). Expecting '8042294646': " << std::endl;
  p.setPhone(8042294646);
  std::cout << p.getPhone() << std::endl;

  std::cout << std::endl;

  std::cout << "Testing E-mail Methods (p.setEmail('ffreeman5@braves.com')). Expecting [ffreeman5@braves.com]: " << std::endl;
  p.setEmail("ffreeman5@braves.com"); 
  std::cout << p.getEmail() << std::endl;

  std::cout << std::endl;

  //Student tests
  std::cout << "========Beginning Student tests========" << std::endl << std::endl;
  Student s(12345678, "jd1yz", "Doe", "Jane", 1, 1, 1995, "jane.doe@richmond.edu",
            "28 Westhampton Way", 8045551212, 13, 4, 2017, Student::AS, false, 0.0);

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
  
  
  std::cout << "====Testing AdmitDate methods:====" << std::endl;
  s.setAdmitDate(1, 5, 2016);
  struct tm admitDate = s.getAdmitDate();
  std::cout << admitDate.tm_mday << ", " << admitDate.tm_mon << ", " <<
               admitDate.tm_year << " [1, 5, 2016]" << std::endl;
  
  std::cout << "====Testing School methods:====" << std::endl;
  s.setSchool(Student::UNDEFINED);
  Student::School studSchool = s.getSchool();
  std::cout << studSchool << " [UNDEFINED or 5]" << std::endl;

  std::cout << "====Testing GPA methods:====" << std::endl;
  s.setGPA(3.8);
  double gpa = s.getGPA();
  std::cout << gpa << " [3.8]" << std::endl;

  std::cout << "====Testing UnitsCompleted methods:====" << std::endl;
  s.setUnitsCompleted(2.5);
  double units = s.getUnitsCompleted();
  std::cout << units << " [2.5]" << std::endl;

  std::cout << "====Testing isFullTime methods:====" << std::endl;
  s.setFullTimeStatus(true);
  bool isFullTime = s.isFullTime();
  std::cout << isFullTime << " [true or 1]" << std::endl;  
}
