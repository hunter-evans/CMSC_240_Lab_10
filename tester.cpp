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
  std::cout << p.getAddress() << std::endl;

  std::cout << std::endl;

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

/*
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
  
  //s.setSchool(UNDEFINED);
  //School studSchool = s.getSchool();
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
  std::cout << isFullTime << " [true]" << std::endl; */  
}
