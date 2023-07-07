#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int r;

	r = isupper(c);

	if (r == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
