#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change all lowercase to uppercase
 * @str: the string
 * Return: the new string
 */

char *string_toupper(char *str)
{
	int i = 0;

	char ch;

	while (str[i] != '\0')
	{
		ch = str[i];
		str[i] = toupper(ch);
		i++;
	}

	return (str);
}
