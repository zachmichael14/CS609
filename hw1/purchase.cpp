///////////////////////////////////////////////////////////////////////////
// File: purchase.cpp
// Purpose: Implemenation of the purchase class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "purchase.h"

Purchase::Purchase(std::string item, int qty, double cost) : _item(item), _qty(qty), _cost(cost)

std::string item() const {
  return _item;
}

int qty() const {
  return _qty;
}

double cost() const {
  return _cost;
}

double total() const {
  return _cost * _qty;
}