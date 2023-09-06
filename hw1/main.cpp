#include <iostream>
#include <string>

int main() {  

    // Prompt for company name 
    std::cout << "Company Name: " << std::endl;

    std::string company_name;

    std::cin >> company_name;

    // TODO: Scrub user input?

    std::cout << "The name of the company is: " << company_name <<std::endl;

    // Return an exit status (0 indicates success)
    return 0;
}
