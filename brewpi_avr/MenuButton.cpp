/* 
* MenuButton.cpp
*
* Created: 2015-01-20 23:08:16
* Author: björn
*/


#include "MenuButton.h"
#include "Brewpi.h"
#include "Pins.h"
#include "FastDigitalPin.h"

// default constructor
MenuButton::MenuButton(){
} //MenuButton

// default destructor
MenuButton::~MenuButton()
{
} //~MenuButton

void MenuButton::init(){
	fastPinMode(menuButtonPin,INPUT);
}
//MenuButton::readButton(){

int MenuButton::Counter(){
return counter++;	
}

int8_t MenuButton::getMenuSelection(){
	int8_t choice;
	
	switch(choice){
	
	case MENU_SELECTION_TEMPERATURE: 
		return choice; 
		break;
	case MENU_SELECTION_BUBBLECONTROL:
		return choice;
		break;
	case MENU_SELECTION_TURN_OFF_LCD:
	    return choice;
		break;
	default:
		choice = -1;
	}
}

MenuButton menuButton;
	
//}