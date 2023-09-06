///////////////////////////////////////////////////////////////////////////
// File: employee.cpp
// Purpose: Implemenation of the employee class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "person.h"
#include "employee.h"

// Constructors
Employee::Employee() : Person() {}

Employee::Employee(std::string _name, std::string _email, std::string _phone) : Person(_name, _email, _phone) {}

double Employee::salary() {
  return _salary;
}

void Employee::salary(double _salary) {
  this->_salary = _salary;
}
