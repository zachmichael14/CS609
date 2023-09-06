#include <string>

#include "person.h"

Person::Person(std::string name, std::string email, std::string phone) : _name(name), _email(email), _phone(phone) {};


std::string Person::name() const {
  return _name;
}

void Person::name(std::string name) 
{
  this->_name = name;
}
