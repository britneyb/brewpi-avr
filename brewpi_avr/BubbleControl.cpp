/* 
* BubbleControl.cpp
*
* Created: 2015-01-20 22:08:20
* Author: björn
*/

#include "BubbleControl.h"
#include "Pins.h"






// default constructor
BubbleControl::BubbleControl(){
	totalNumberOfBubbles = 0;
} //BubbleControl

// default destructor
BubbleControl::~BubbleControl(){
} //~BubbleControl

bool BubbleControl::isConnected(void){
	return true;
}



void BubbleControl::updateBubbles(void){
	
	//if ()
	//{
	//}
}

void BubbleControl::init(){
	fastPinMode(bubblePin,INPUT);
}
unsigned long BubbleControl::getTotalNumberOfBubbles(void){
return totalNumberOfBubbles;	
} 

uint8_t BubbleControl::getMeanTimeBetweenBubbles(void){
return 1;	
}
uint8_t BubbleControl::getTimeSinceLastBubble(void){
return 1;	
}

uint8_t BubbleControl::getUpTime(void){
return 1;	
}

BubbleControl bubbleControl;