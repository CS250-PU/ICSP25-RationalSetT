//******************************************************************************
// File name:  
// Author:     
// Date:       
// Class:      
// Assignment: 
// Purpose:    
//
//******************************************************************************

/*
In RationalSet 

TODO #1: Implement the default constuctor, then uncomment line
         XX and XX and run. Commit and push.

TODO #2: Implement size. Uncomment lines XX to XX. Commit and
         push.  

TODO #3: Implement write using a range based for loop. Uncomment lines
         XX to XX. Commit and push.

TODO #4: Implement add and uncomment lines XX to XX. Commit and push.
*/
#include <iostream>
#include <string>
#include "../include/Rational.h"
// #include "../include/RationalSet.h"

int main () {
  Rational cR1, cR2;
  // RationalSet cRSet;

  std::cout << "Rational Calculator" << std::endl << std::endl;

  std::cout << "Enter rational #1: ";
  cR1.read (std::cin);
  std::cout << "Enter rational #2: ";
  cR2.read (std::cin);

  std::cout << std::endl << std::endl;

  cR1.write (std::cout);
  std::cout << " + ";
  cR2.write (std::cout);
  std::cout << " = ";
  cR1.add (cR2).write (std::cout);

  std::cout << std::endl;

  cR1.write (std::cout);
  std::cout << " * ";
  cR2.write (std::cout);
  std::cout << " = ";
  cR1.multiply (cR2).write (std::cout);

  std::cout << std::endl << std::endl;

  // std::cout << "Rational Set Size: " << cRSet.size ()
  //   << std::endl << std::endl;

  // std::cout << "Rational Set: ";
  // cRSet.write (std::cout);

  // std::cout << std::endl << "Adding : ";
  // cRSet.add (cR1);
  // std::cout << "Rational Set Size: " << cRSet.size ()
  // << std::endl << std::endl;
  // std::cout << std::endl << "Rational Set: ";
  // cRSet.write (std::cout);

  // std::cout << std::endl << "Adding : ";
  // cRSet.add (cR2);
  // std::cout << "Rational Set Size: " << cRSet.size ()
  // << std::endl << std::endl;
  // std::cout << std::endl << "Rational Set: ";
  // cRSet.write (std::cout);

  // std::cout << std::endl << std::endl << "Program Completed" << std::endl;

  return EXIT_SUCCESS;
}