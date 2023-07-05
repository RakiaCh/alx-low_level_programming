#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	double result;
	result = sqrt(double(n));

	if (result == (int)result)
		return ((int)result);
	else
		return (-1);

}
