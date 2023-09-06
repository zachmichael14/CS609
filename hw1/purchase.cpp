///////////////////////////////////////////////////////////////////////////
// File: purchase.cpp
// Purpose: Implemenation of the purchase class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "purchase.h"

Purchase::Purchase(std::string item, int qty, double cost) : _item(item), _qty(qty), _cost(cost) {}

std::string Purchase::item() const {
  return _item;
}

int Purchase::qty() const {
  return _qty;
}

double Purchase::cost() const {
  return _cost;
}

double Purchase::total() const {
  return _cost * _qty;
}