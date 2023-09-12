///////////////////////////////////////////////////////////////////////////
// File: manage_employees.h
// Purpose: Class definition of an employee management menu item.
///////////////////////////////////////////////////////////////////////////
#ifndef MANAGE_EMPLOYEES_H
#define MANAGE_EMPLOYEES_H
// #include <string>
#include <vector>
#include "menu_item.h"
#include "employee.h"

class Manage_Employees : public Menu_Item
{
public:

  // Constructor
  Manage_Employees(std::vector<Employee> *_employees);

  // Get text for the menu item
  virtual std::string label();

  // Function to execute when this menu item is selected
  virtual void selected();

private:
  std::vector<Employee> *_employees;
};
#endif