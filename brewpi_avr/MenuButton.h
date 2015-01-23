/* 
* MenuButton.h
*
* Created: 2015-01-20 23:08:17
* Author: björn
*/


#ifndef __MENUBUTTON_H__
#define __MENUBUTTON_H__

enum menusSelection{
MENU_SELECTION_TEMPERATURE,
MENU_SELECTION_BUBBLECOUNTER,
MENU_SELECTION_TURN_OFF_LCD	
};


class MenuButton
{
//variables
public:
protected:
private:


//functions
public:
	MenuButton();
	~MenuButton();

protected:
private:
	MenuButton( const MenuButton &c );
	MenuButton& operator=( const MenuButton &c );

}; //MenuButton

#endif //__MENUBUTTON_H__
