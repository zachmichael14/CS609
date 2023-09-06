///////////////////////////////////////////////////////////////////////////
// File: company.cpp
// Purpose: Implementation of the company class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "company.h"
#include "employee.h"
#include "customer.h"

// Constructor
Company::Company(std::string name) {
  _employees = new std::vector<Employee>();
  _customers = new std::vector<Customer>();
}

// Get name
std::string Company::name() {
  return _name;
}

// Object adders
void Company::add_employee(Employee _employee) {
  _employees->push_back(_employee);
}

void Company::add_customer(Customer _customer) {
  _customers->push_back(_customer);
}

// Iterators
std::vector<Employee>::iterator Company::employee_begin() {
  return _employees->begin();
}

std::vector<Employee>::iterator Company::employee_end() {
  return _employees->end();
}

std::vector<Customer>::iterator Company::customer_begin() {
  return _customers->begin();
}

std::vector<Customer>::iterator Company::customer_end() {
  return _customers->end();
}