///////////////////////////////////////////////////////////////////////////
// File: employee.h
// Purpose: Class definition of an employee.
///////////////////////////////////////////////////////////////////////////
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"

class Employee : public Person 
{
public:
  // Default constructor
  Employee();

  // Parameterized constructor
  Employee(std::string _name, std::string _email, std::string _phone, double _salary);

  double salary();
  void salary(double salary);

private:
  double _salary;
};
#endif