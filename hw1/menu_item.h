///////////////////////////////////////////////////////////////////////////
// File: menu_item.h
// Purpose: Class definition of an menu item.
///////////////////////////////////////////////////////////////////////////
#ifndef MENU_ITEM_H
#define MENU_ITEM_H
#include <string>

class Menu_Item
{
public:
    // Get the text to display for the menu item
    virtual std::string label()=0;

    // Function to execute when this item is selected
    virtual void selected()=0;
};
#endif