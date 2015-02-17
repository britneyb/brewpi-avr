/* 
* BubbleControl.h
*
* Created: 2015-01-20 22:08:20
* Author: björn
*/


#ifndef __BUBBLECONTROL_H__
#define __BUBBLECONTROL_H__
#include <stdint.h>
#include "Ticks.h"


//holds number of bubbles and starttime of a specific period
struct BubbleIntervall{
int16_t numberOfBubbles;
ExternalTicks timestampFirstBubbleOfPeriod;
};
	



class BubbleControl
{
//variables
public:
protected:
private:
unsigned long totalNumberOfBubbles; 
ExternalTicks timestampOfLastBubble;
BubbleIntervall currentPeriod;
BubbleIntervall previousPeriod;


 
//functions
public:
	BubbleControl();
	~BubbleControl();
	bool isConnected(void);
	unsigned long getTotalNumberOfBubbles(void);
	uint8_t getMeanTimeBetweenBubbles(void);
	uint8_t getTimeSinceLastBubble(void);
	uint8_t getUpTime(void);
	
protected:
private:
	BubbleControl( const BubbleControl &c );
	BubbleControl& operator=( const BubbleControl &c );

}; //BubbleControl

extern BubbleControl bubbleControl;

#endif //__BUBBLECONTROL_H__
