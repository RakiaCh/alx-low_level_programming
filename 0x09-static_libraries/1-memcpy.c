#include "main.h"
#include <string.h>

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 * Return: a pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
