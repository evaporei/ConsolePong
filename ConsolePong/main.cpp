#include <iostream>
#include "ball.h"
using namespace std;

int main()
{
	Ball ball(0, 0);
	cout << ball << endl;

	ball.randomDirection();
	cout << ball << endl;

	ball.move();
	cout << ball << endl;

	ball.randomDirection();
	ball.move();
	cout << ball << endl;

	cin.get();
	return 0;
}