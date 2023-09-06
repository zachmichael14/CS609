///////////////////////////////////////////////////////////////////////////
// File: company.h
// Purpose: Class definition of a company.
///////////////////////////////////////////////////////////////////////////
#ifndef COMPANY_H
#define COMPANY_H
#include <vector>
#include "employee.h"
#include "customer.h"

class Company
{
public:
  // Constructor
  Company(std::string name);

  // Getter
  std::string name();

  // Object adders
  void add_employee(Employee _employee);
  void add_customer(Customer _customer);

  // Iterators
  std::vector<Employee>::iterator employee_begin();
  std::vector<Employee>::iterator employee_end();
  std::vector<Customer>::iterator customer_begin();
  std::vector<Customer>::iterator customer_end();

private:
  std::vector<Employee>* _employees;
  std::vector<Customer>* _customers;
  std::string _name;
};
#endif