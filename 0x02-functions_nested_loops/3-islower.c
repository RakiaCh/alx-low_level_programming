#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int r;

	r = islower(c);

	if (r == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
