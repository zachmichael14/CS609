///////////////////////////////////////////////////////////////////////////
// File: person.cpp
// Purpose: Implemenation of the person class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "person.h"

// Constructor
Person::Person() {}
Person::Person(std::string _name, std::string _email, std::string _phone) : _name(_name), _email(_email), _phone(_phone) {}

// Get name
std::string Person::name() const {
  return _name;
}

// Set name
void Person::name(std::string& _name) 
{
  this->_name = _name;
}

// Get email
std::string Person::email() const {
  return _email;
}

// Set email
void Person::email(std::string& _email) {
  this->_email = _email;
}

// Get phone
std::string Person::phone() const {
  return _phone;
}

// Set phone
void Person::phone(std::string& _phone) {
  this->_phone = _phone;
}