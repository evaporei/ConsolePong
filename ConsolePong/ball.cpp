#include "ball.h"
#include <stdlib.h>
#include <time.h>
#include <ostream>

Ball::Ball(int posX, int posY) : originalX(posX), originalY(posY), x(posX), y(posY), direction(STOP)
{
	// direction = STOP;
}

void Ball::reset()
{
	x = originalX;
	y = originalY;
	direction = STOP;
}

void Ball::changeDirection(Direction dir)
{
	direction = dir;
}

inline int Ball::getX()
{
	return x;
}

inline int Ball::getY()
{
	return y;
}

inline Direction Ball::getDirection()
{
	return direction;
}

void Ball::randomDirection()
{
	direction = (Direction)((rand() % 6) + 1);
}

void Ball::move()
{
	switch (direction)
	{
	case STOP:
		break;
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP_LEFT:
		x--;
		y++;
		break;
	case DOWN_LEFT:
		x++;
		y--;
	case UP_RIGHT:
		x--;
		y++;
		break;
	case DOWN_RIGHT:
		x--;
		y--;
		break;
	default:
		break;
	}
}

std::ostream & operator<<(std::ostream & o, Ball ball)
{
	o << "Ball [" << ball.x << "," << ball.y << "][" << ball.direction << "]";
	return o;
}