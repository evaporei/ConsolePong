#ifndef BALL_H
#define BALL_H

#include "direction.h"
#include <iostream>

class Ball
{
private:
	int x, y;
	int originalX, originalY;
	Direction direction;
public:
	// Constructor
	Ball(int posX, int posY);

	// Util/logic
	void reset();
	void changeDirection(Direction dir);
	void randomDirection();
	void move();
	friend std::ostream & operator<<(std::ostream & o, Ball ball);

	// Getters
	inline int getX();
	inline int getY();
	inline Direction getDirection();
	
};

#endif