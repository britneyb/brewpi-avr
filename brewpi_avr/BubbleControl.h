/* 
* BubbleControl.h
*
* Created: 2015-01-20 22:08:20
* Author: björn
*/


#ifndef __BUBBLECONTROL_H__
#define __BUBBLECONTROL_H__


class BubbleControl
{
//variables
public:
protected:
private:

//functions
public:
	BubbleControl();
	~BubbleControl();
	bool isConnected(void);
protected:
private:
	BubbleControl( const BubbleControl &c );
	BubbleControl& operator=( const BubbleControl &c );

}; //BubbleControl

extern BubbleControl bubbleControl;

#endif //__BUBBLECONTROL_H__
