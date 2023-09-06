///////////////////////////////////////////////////////////////////////////
// File: person.h
// Purpose: Class definition of a Person.
///////////////////////////////////////////////////////////////////////////
#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
public:
  // Default constructor
  Person() {};

  // Parameterized constructor
  Person(std::string name, std::string email, std::string phone);

  // REMOVE: Method signatures to be implemented in person.cpp file
  std::string name() const;
  void name(std::string _name);

private:
  // REMOVE: Member variables
  std::string _name;
  std::string _email;
  std::string _phone;

};

#endif // PERSON_H