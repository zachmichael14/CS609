///////////////////////////////////////////////////////////////////////////
// File: quit_menu.h
// Purpose: Definition of a menu item for quitting.
///////////////////////////////////////////////////////////////////////////
#ifndef QUIT_H
#define QUIT_H
#include "menu_item.h"

class Quit_Menu : public Menu_Item
{
public:
    // Constructors
    Quit_Menu();

    Quit_Menu(const std::string& _msg);

    // Menu item implementation
    virtual std::string label();
    virtual void selected();

    // Returns true if the quit function has been selected.
    virtual bool quit();
    
private:
    bool _quit;
    std::string _msg;
};
#endif