#include "main.h"
#include <string.h>

/**
 * _strchr -  a function that locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
