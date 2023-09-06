///////////////////////////////////////////////////////////////////////////
// File: purchase.h
// Purpose: Class definition of a purchase.
///////////////////////////////////////////////////////////////////////////
#ifndef PURCHASE_H
#define PURCHASE_H

class Purchase 
{
public:

  // Constructor
  Purchase(std::string _item, int _qty, double _cost);

  // No setters (purchase must be instantiated with all member variable values)
  std::string item();
  int qty();
  double cost();
  double total();

private:
  std::string _item;
  int _qty;
  double _cost;
};
#endif