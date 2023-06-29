#include "main.h"
#include <ctype.h>

/**
 * string_toupper - unction that changes all lowercase letters 
 * of a string to uppercase
 * @str: the string
 * Return: the new string
 */

char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		toupper(str[i]);
		i++;
	}

	return (*str);
}
