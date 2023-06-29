#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string
 * @dest: destination
 * @src: source
 * @n: The number of characters to be copied from source
 * Return: a pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
