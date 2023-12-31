#include <iostream>
#include <string>
#include <vector>

#include "person.h"
#include "purchase.h"
#include "customer.h"
#include "employee.h"
#include "manage_employees.h"
#include "company.h"
#include "menu.h"
#include "quit_menu.h"



int main() {
    std::vector<Employee> employees;

    Menu menu;
    Quit_Menu *quit = new Quit_Menu();
    Manage_Employees *manage = new Manage_Employees(&employees);

    menu.add_item(manage);
    menu.add_item(quit);

    while(not quit->quit()) {
        menu.run();
    }


    delete quit;
    delete manage;


    //////// TEST FOR USER-CREATED COMPANY, EMPLOYEE, AND CUSTOMER //////
    // char choice;
    // std::cout << "Choice, A or M?";
    // std::cin >> choice;

    // if (choice == 'A') {
    //     std::string comp_name;

    //     std::cout << "Company name: ";
    //     std:: cin >> comp_name;

    //     Company comp1(comp_name);

    //     std::cout << "Company " << comp1.name() << " created" <<std::endl;

    //     std::cout << "Add employee" << std::endl;
    //     std::string e_name;
    //     std::string e_email;
    //     std::string e_phone;
    //     double salary;
        

    //     std::cout << "Employee name: ";
    //     std:: cin >> e_name;

    //     std::cout << "Employee email: ";
    //     std:: cin >> e_email;

    //     std::cout << "Employee phone: ";
    //     std:: cin >> e_phone;

    //     std::cout << "Employee salary: ";
    //     std:: cin >> salary;

    //     Employee e1(e_name, e_email, e_phone, salary);

    //     comp1.add_employee(e1);

    //     std::cout << "Employee" << e1.name() << " added to company" << std::endl;

    //     std::cout << "Add customer " << std::endl;

    //     std::string c_name;
    //     std::string c_email;
    //     std::string c_phone;
        

    //     std::cout << "Customer name: ";
    //     std:: cin >> c_name;

    //     std::cout << "Customer email: ";
    //     std:: cin >> c_email;

    //     std::cout << "Customer phone: ";
    //     std:: cin >> c_phone;

    //     Customer c1(c_name, c_email, c_phone);

    //     comp1.add_customer(c1);

    //     std::cout << "Customer " << c1.name() << " added to company" << std::endl;

    //     // Use the iterators to iterate through the customers
    //     std::vector<Customer>::iterator c_begin = comp1.customer_begin();
    //     std::vector<Customer>::iterator c_end = comp1.customer_end();
        
    //     std::vector<Employee>::iterator e_begin = comp1.employee_begin();
    //     std::vector<Employee>::iterator e_end = comp1.employee_end();

    
    //     while (c_begin != c_end) {
    //         Customer customer = *c_begin;
    // //         // Access purchase data or perform operations
    //         std::cout << "Customer: " << customer.name() << ", Email: " << customer.email() << ", Phone: " << customer.phone() << std::endl;
        
    //         ++c_begin; // Move to the next purchase
    //     }


    //     while (e_begin != e_end) {
    //         Employee employee = *e_begin;
    // //         // Access purchase data or perform operations
    //         std::cout << "Employee: " << employee.name() << ", Email: " << employee.email() << ", Phone: " << employee.phone() << std::endl;
        
    //         ++e_begin; // Move to the next purchase
    //     }

    // }
    ////// END COMPANY TEST ///////

    /////// TEST FOR USER-CREATED EMPLOYEE //////
    // char choice;

    // std::cout << "Choice, A or M?";
    // std::cin >> choice;

    // if (choice == 'A') {
    //     std::string name;
    //     std::string email;
    //     std::string phone;
    //     double salary;
        
    //     std::cout << "Name: ";
    //     std:: cin >> name;

    //     std::cout << "Email: ";
    //     std:: cin >> email;

    //     std::cout << "Phone: ";
    //     std:: cin >> phone;

    //     // std::cout << "Salary: ";
    //     // std::cin >> salary;

    //     // Employee e1(name, email, phone, salary);
    //     Employee e1(name, email, phone, 50000.25);

    //     std::cout << "Employee " << e1.name() << " created." << std::endl;
    //     std::cout << e1.email() << e1.phone() << std::endl;
    //     std::cout << e1.salary() << std::endl;
    // }
    ////// END EMPLOYEE TEST ///////

    //////// TEST FOR USER-CREATED CUSTOMER AND PURCHASE //////
    // char choice;
    // std::cout << "Choice, A or M?";
    // std::cin >> choice;

    // if (choice == 'A') {
    //     std::string name;
    //     std::string email;
    //     std::string phone;
        
    //     std::cout << "Name: ";
    //     std:: cin >> name;

    //     std::cout << "Email: ";
    //     std:: cin >> email;

    //     std::cout << "Phone: ";
    //     std:: cin >> phone;

    //     Customer c1(name, email, phone);

    //     std::cout << "Customer " << c1.name() << " created." << std::endl;
    //     std::cout << c1.email() << c1.phone() << std::endl;

    //     std::cout << "Add purchase" << std::endl;

    //     std::string item;
    //     int qty;
    //     double cost;

    //     std::cout << "Item: ";
    //     std:: cin >> item;

    //     std::cout << "Quantity: ";
    //     std:: cin >> qty;

    //     std::cout << "Cost: ";
    //     std:: cin >> cost;

    //     Purchase p1(item, qty, cost);

    //     std::cout << "Adding " << p1.item() << " to customer " << c1.name() << " history" << std::endl;

    //     c1.add_purchase(p1);
    //     // Purchase p1(item, qty, cost);

    //     c1.add_purchase(Purchase("Gadget", 4, 4.6));


    //     // Use the iterators to iterate through the purchases
    //     std::vector<Purchase>::const_iterator it = c1.purchase_begin();
    //     std::vector<Purchase>::const_iterator end = c1.purchase_end();
    
    //     while (it != end) {
    //         const Purchase& purchase = *it;
    //         // Access purchase data or perform operations
    //         std::cout << "Item: " << purchase.item() << ", Quantity: " << purchase.qty() << ", Cost: " << purchase.cost() << std::endl;
        
    //         ++it; // Move to the next purchase
    //     }

    // }
    
    ////// END CUSTOMER AND PURCHASE TEST ///////

    // /////// TEST FOR USER-CREATED PURCHASE //////
    // char choice;
    // std::cout << "Choice, A or M?";
    // std::cin >> choice;

    // if (choice == 'A') {
    //     std::string item;
    //     int qty;
    //     double cost;
        
    //     std::cout << "Item: ";
    //     std:: cin >> item;

    //     std::cout << "Quantity: ";
    //     std:: cin >> qty;

    //     std::cout << "Cost: ";
    //     std:: cin >> cost;

    //     Purchase p1(item, qty, cost);

    //     std::cout << "Item " << p1.item() << " created." << std::endl;
    //     std::cout << p1.qty() << p1.cost() << p1.total() << std::endl;
    // }
    ////// END PURCHASE TEST ///////

    /////// TEST FOR USER-CREATED PERSON //////
    // char choice;

    // std::cout << "Choice, A or M?";
    // std::cin >> choice;

    // if (choice == 'A') {
    //     std::string name;
    //     std::string email;
    //     std::string phone;
        
    //     std::cout << "Name: ";
    //     std:: cin >> name;

    //     std::cout << "Email: ";
    //     std:: cin >> email;

    //     std::cout << "Phone: ";
    //     std:: cin >> phone;

    //     Person p1(name, email, phone);

    //     std::cout << "Person " << p1.name() << " created." << std::endl;
    //     std::cout << p1.email() << p1.phone() << std::endl;
    // }
    ////// END PERSON TEST ///////


    // // Prompt for company name 
    // std::cout << "Company Name: " << std::endl;

    // std::string company_name;

    // std::cin >> company_name;

    // // TODO: Scrub user input? 

    // std::cout << "The name of the company is: " << company_name <<std::endl;

    // // Return an exit status (0 indicates success)
    return 0;
}