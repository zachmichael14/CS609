///////////////////////////////////////////////////////////////////////////
// File: purchase.cpp
// Purpose: Implementation of the purchase class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "purchase.h"

Purchase::Purchase(std::string _item, int _qty, double _cost) : _item(_item), _qty(_qty), _cost(_cost) {}

std::string Purchase::item() {
  return _item;
}

int Purchase::qty() {
  return _qty;
}

double Purchase::cost() {
  return _cost;
}

double Purchase::total() {
  return _cost * _qty;
}