#include "main.h"
#include <string.h>

/**
 * _memset - unction that fills memory with a constant byte.
 * @s: the memory area
 * @b: the constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
