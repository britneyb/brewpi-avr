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
#include "Logger.h"



// default constructor
MenuButton::MenuButton(){

} //MenuButton

// default destructor
MenuButton::~MenuButton()
{
} //~MenuButton

void MenuButton::init(){
	fastPinMode(menuButtonPin,INPUT);
		currentState = false;
		choice = 1;
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
	
	if (choice > 3){
		choice = 1;
	}

}

/*String MenuButton::getMenuSelectionInAString(){
	
	return String(choice);
}*/
int8_t MenuButton::getChoice(){
	return choice;
	
}

int8_t MenuButton::getMenuSelection(){
	
		logInfo(INFO_CHOICE);
		
		int8_t test = 1;
	switch(test){
	
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