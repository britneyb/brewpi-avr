/* 
* BubbleControl.cpp
*
* Created: 2015-01-20 22:08:20
* Author: björn
*/

#include "BubbleControl.h"




BubbleControl bubbleControl;

// default constructor
BubbleControl::BubbleControl(){
	totalNumberOfBubbles = 0;

	//timestampOfLastBubble;
	currentPeriod.timestampFirstBubbleOfPeriod=ticks.seconds();
	//currentPeriod.numberOfBubbles = 0;
	//previousPeriod.numberOfBubbles = 0;
	previousPeriod.timestampFirstBubbleOfPeriod = ticks.seconds();
	
} //BubbleControl

// default destructor
BubbleControl::~BubbleControl(){
} //~BubbleControl

bool BubbleControl::isConnected(void){
	return true;
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