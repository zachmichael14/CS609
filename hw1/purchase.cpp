///////////////////////////////////////////////////////////////////////////
// File: purchase.cpp
// Purpose: Implemenation of the purchase class.
///////////////////////////////////////////////////////////////////////////
#include <string>
#include "purchase.h"

 
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