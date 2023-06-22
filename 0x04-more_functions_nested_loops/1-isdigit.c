#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: digit to check
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int r;

	r = isdigit(c);

	return (r);
}
