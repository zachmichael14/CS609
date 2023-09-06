///////////////////////////////////////////////////////////////////////////
// File: customer.h
// Purpose: Class definition of a customer.
///////////////////////////////////////////////////////////////////////////
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <vector>
#include "purchase.h"

class Customer : public Person
{
public:
  // Constructor
  Customer();
  Customer(std::string _name, std::string _email, std::string _phone);

  void add_purchase(Purchase purchase);
  std::vector<Purchase>::const_iterator purchase_begin();
  std::vector<Purchase>::const_iterator purchase_end();

private:
  std::vector<Purchase> *_history;
};
#endif