#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function that searches a string 
 * @s: the first string
 * @accept: the second string
 * Return: a pointer to the byte that matches or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
