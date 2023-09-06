///////////////////////////////////////////////////////////////////////////
// File: employee.cpp
// Purpose: Implementation of the employee class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "person.h"
#include "employee.h"

// Constructors
Employee::Employee() : Person() {}

Employee::Employee(std::string _name, std::string _email, std::string _phone, double _salary) : Person(_name, _email, _phone) {
  this->_salary = _salary;
}

double Employee::salary() {
  return _salary;
}

void Employee::salary(double _salary) {
  this->_salary = _salary;
}
