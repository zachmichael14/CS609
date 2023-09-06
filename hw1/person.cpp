///////////////////////////////////////////////////////////////////////////
// File: person.cpp
// Purpose: Implemenation of the person class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "person.h"

// Constructor
Person::Person() {}
Person::Person(std::string name, std::string email, std::string phone) : _name(name), _email(email), _phone(phone) {}

// Get name
std::string Person::name() const {
  return _name;
}

// Set name
void Person::name(std::string& name) 
{
  this->_name = name;
}

// Get email
std::string Person::email() const {
  return _email;
}

// Set email
void Person::email(std::string& email) {
  this->_email = email;
}

// Get phone
std::string Person::phone() const {
  return _phone;
}

// Set phone
void Person::phone(std::string& phone) {
  this->_phone = phone;
}