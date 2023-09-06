///////////////////////////////////////////////////////////////////////////
// File: customer.cpp
// Purpose: Implemenation of the customer class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "customer.h"
#include "person.h"
#include "purchase.h"

// Initialize _history vector ???
Customer::Customer() : Person()
{
  _history = new std::vector<Purchase>();
}

Customer::Customer(std::string name, std::string email, std::string phone) : Person(name, email, phone)
{
  _history = new std::vector<Purchase>();
}

//??? Pass by reference since the add_purchase doesn't modify the purchase object 
//??? and no need to make a copy of the object??
void Customer::add_purchase(const Purchase& purchase) {
  _history->push_back(purchase);
}

std::vector<Purchase>::const_iterator Customer::purchase_begin() {
  return _history->begin();
}

std::vector<Purchase>::const_iterator Customer::purchase_end() {
  return _history->end();
}