///////////////////////////////////////////////////////////////////////////
// File: manage_employees.cpp
// Purpose: Implementation of the employee management menu item.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include <iostream>
#include <vector>
#include "menu.h"
#include "menu_item.h"
#include "manage_employees.h"
#include "employee.h"
#include "quit_menu.h"


// Helper classes

// Add employee
class Add_Employee : public Menu_Item
{
public:
  // Constructor
  Add_Employee(std::vector<Employee> *_employees) {
    this->_employees = _employees;
  }

  virtual std::string label() {
    // Return current list of employees for printing
    return "Add Employee";
  }

  virtual void selected() {

    std::string name;
    std::string email;
    std::string phone;
    double salary;
    std::cout << "Name: ";
    std::cin >> name;

    std::cout << "Email: ";
    std::cin >> email;

    std::cout << "Phone: ";
    std::cin >> phone;

    std::cout << "Salary: ";
    std::cin >> salary;

    Employee employee(name, email, phone, salary);

    _employees->push_back(employee);
    
    // Display list of employees (including newest adddition)
    // in reversse chornocological order (newest first)
    // After the successful addition of an employee

  }
  private:
    std::vector<Employee> *_employees;
};

// Constructor
Manage_Employees::Manage_Employees(std::vector<Employee> *_employees) {
  this->_employees = _employees;
};

// Display options to user
std::string Manage_Employees::label() 
{
  return "(A)dd Employee or (M)ain Menu?";
}

// Build employee management menu
void Manage_Employees::selected() 
{
  Menu menu;
  Quit_Menu *quit = new Quit_Menu("Previous Menu");
  Add_Employee *add = new Add_Employee(_employees);
}

// Helper classes? Add employee View Employee