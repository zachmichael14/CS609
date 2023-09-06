///////////////////////////////////////////////////////////////////////////
// File: purchase.cpp
// Purpose: Implemenation of the purchase class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "purchase.h"


Purchase::Purchase(std::string _item, int _qty, double _cost) : _item(_item), _qty(_qty), _cost(_cost) {}

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