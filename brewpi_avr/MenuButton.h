/* 
* MenuButton.h
*
* Created: 2015-01-20 23:08:17
* Author: björn
*/

#include "Brewpi.h"
#ifndef __MENUBUTTON_H__
#define __MENUBUTTON_H__

enum menusSelection{
MENU_SELECTION_TEMPERATURE,
MENU_SELECTION_BUBBLECONTROL,
MENU_SELECTION_TURN_OFF_LCD	
};


class MenuButton
{
//variables
public:
protected:
private:
int8_t counter;

//functions
public:
	MenuButton();
	~MenuButton();
	void init();
	int8_t getMenuSelection();

protected:
private:
	MenuButton( const MenuButton &c );
	MenuButton& operator=( const MenuButton &c );
	int Counter();
	
}; //MenuButton

extern MenuButton menuButton;

#endif //__MENUBUTTON_H__
