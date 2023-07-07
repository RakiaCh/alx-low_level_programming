#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: n bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
