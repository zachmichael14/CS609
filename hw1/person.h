///////////////////////////////////////////////////////////////////////////
// File: person.h
// Purpose: TBD.
///////////////////////////////////////////////////////////////////////////

// This will be a pure abstract class from which the concrete
// classes Employee and Customer will be dervied

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

  std::string name() const;
  void name(std::string _name);


  // TODO

private:
  std::string _name;
  std::string _email
  std::string _phone;

}

#endif // PERSON_H