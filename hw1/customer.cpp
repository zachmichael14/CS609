///////////////////////////////////////////////////////////////////////////
// File: customer.cpp
// Purpose: Implemenation of the customer class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "customer.h"

Customer::Customer() {}

Customer::Customer(std::string name, std::string email, std::string phone) : _name(name) _email(email), _phone(phone) {}

// Pass by reference since the add_purchase doesn't modify the purchase object 
// and no need to make a copy of the object??
void Customer::add_purchase(const Purchase& purchase) {
  _history.push_back(purchase)
}
