#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string
 * @s: first string
 * @accept: second string
 * Return: a pointer or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
