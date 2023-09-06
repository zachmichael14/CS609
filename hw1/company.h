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
  Company(std::string name);

  std::string name() const;
  void add_employee(Employee _employee)



private:
  std::vector<Employee>* _employees;
  std::vector<Customer>* _customers;
  std::string _name;
};
#endif