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
  std::string item() const;
  int qty() const;
  double cost() const;
  double total() const;

private:
  std::string _item;
  int _qty;
  double _cost;
};
#endif