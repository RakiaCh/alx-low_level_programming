#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the first integer
 * @y: the second integer
 * Return: -1 if y < 0, else the value
 */

int _pow_recursion(int x, int y)
{
	int res;
	if (y < 0)
		res = -1;
	else
		res = pow(x, y);

	return (res);
}
