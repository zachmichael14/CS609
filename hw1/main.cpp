#include <iostream>
#include <string>

#include "person.h"

int main() {  

    Person p1("J", "2asd@sd.com", "123456");
    Person p2;

    std::cout << "P1: " << p1.name() << std::endl; 

    p2.name("Z");

    std::cout << "P2: " << p2.name() << std::endl; 

    return 0;



    // // Prompt for company name 
    // std::cout << "Company Name: " << std::endl;

    // std::string company_name;

    // std::cin >> company_name;

    // // TODO: Scrub user input? 

    // std::cout << "The name of the company is: " << company_name <<std::endl;

    // // Return an exit status (0 indicates success)
    // return 0;
}