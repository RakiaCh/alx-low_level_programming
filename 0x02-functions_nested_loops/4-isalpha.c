#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	int r;

	r = isalpha(c);

	if (r == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
