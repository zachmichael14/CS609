///////////////////////////////////////////////////////////////////////////
// File: employee.cpp
// Purpose: Implemenation of the employee class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "person.h"
#include "employee.h"

// Constructors
Employee::Employee() : Person() {}

Employee::Employee(std::string name, std::string email, std::string phone) : Person(name, email, phone) {}


