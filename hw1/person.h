///////////////////////////////////////////////////////////////////////////
// File: person.h
// Purpose: Class definition of a person.
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
  Person(std::string _name, std::string _email, std::string _phone);

  // REMOVE: Method signatures for setters and getters to be implemented in person.cpp file
  // WHY PASS BY REFERENCE(&) FOR SETTERS? ALWAYS?
  std::string name() const;
  void name(std::string& _name);

  std::string email() const;
  void email(std::string& _email);

  std::string phone() const;
  void phone(std::string& _phone);


private:
  // REMOVE: Member variables
  std::string _name;
  std::string _email;
  std::string _phone;

};

#endif // PERSON_H