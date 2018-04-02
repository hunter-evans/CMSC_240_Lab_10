#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
  Person p(29977710, "wr5gk", "Freeman", "Freddie", 7, 4, 1996, "ffreeman@braves.com", "2 Hank Aaron Drive", 8043600327); 


  //Person tests
  std::cout << "========Beginning Person tests========" << std::endl;

  std::cout << std::endl;

  //Get First Name
  std::cout << "Testing getFirstName. Should equal 'Freddie': " << std::endl;
  std::string fname = p.getFirstName();
  std::cout << fname << std::endl;





  std::cout << std::endl;



  //Student tests
  std::cout << "========Beginning Student tests========" << std::endl;
}
