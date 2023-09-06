#include <iostream>
#include <string>

#include "person.h"

int main() {

    /////// TEST FOR USER-CREATED PERSON //////

    char choice;

    std::cout << "Choice, A or M?";
    std::cin >> choice;

    if (choice == 'A') {
        std::string name;
        std::string email;
        std::string phone;
        
        std::cout << "Name: ";
        std:: cin >> name;

        std::cout << "Email: ";
        std:: cin >> email;

        std::cout << "Phone: ";
        std:: cin >> phone;

        Person p1(name, email, phone);

        std::cout << "Person " << p1.name() << " created." << std::endl;
        std::cout << p1.email() << p1.phone() << std::endl;
    } 

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