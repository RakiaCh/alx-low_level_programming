#include "main.h"
#include <string.h>

/**
 * *_strcpy - a function that copies the string pointed to by src,
 * including (\0), to the buffer pointed to by dest
 * @src: source
 * @dest: destination
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
