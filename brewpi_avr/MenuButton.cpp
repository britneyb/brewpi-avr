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
	currentState = false;
} //MenuButton

// default destructor
MenuButton::~MenuButton()
{
} //~MenuButton

void MenuButton::init(){
	fastPinMode(menuButtonPin,INPUT);
}
//MenuButton::readButton(){


void MenuButton::updateMenuSelection(){
	if(digitalRead(menuButtonPin) && !currentState)
	{
		choice++;
		currentState=true;
	}
	else if (digitalRead(menuButtonPin) && currentState)
	{
		currentState=true;
	}
	else
		currentState=false;	
		
}

/*String MenuButton::getMenuSelectionInAString(){
	
	return String(choice);
}*/

int8_t MenuButton::getMenuSelection(){
	choice = 1;
	
	switch(choice){
	
	case MENU_SELECTION_TEMPERATURE: 
		return 1; 
		break;
	case MENU_SELECTION_BUBBLECONTROL:
		return 2;
		break;
	case MENU_SELECTION_TURN_OFF_LCD:
	    return 3;
		break;
	default:
		choice = 1;
		
	}
	return choice;
}

MenuButton menuButton;
	
//}