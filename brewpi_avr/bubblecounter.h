/* 
* Bubblecounter.h
*
* Created: 2015-01-20 22:08:20
* Author: björn
*/


#ifndef __BUBBLECOUNTER_H__
#define __BUBBLECOUNTER_H__


class Bubblecounter
{
//variables
public:
protected:
private:

//functions
public:
	Bubblecounter();
	~Bubblecounter();
	bool isConnected(void);
protected:
private:
	Bubblecounter( const Bubblecounter &c );
	Bubblecounter& operator=( const Bubblecounter &c );

}; //Bubblecounter

extern Bubblecounter bubbleCounter;

#endif //__BUBBLECOUNTER_H__
