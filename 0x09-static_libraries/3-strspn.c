#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the first string
 * @accept: the second string
 * Return: a number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
