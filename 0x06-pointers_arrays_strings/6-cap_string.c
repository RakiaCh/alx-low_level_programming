#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - change all lowercase to uppercase
 * @str: the string
 * Return: the new string
 */

char *cap_string(char *str)
{
	int len;
	int i;
	len = strlen(str);
	int capitalize_next = 1;

       	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
	}

	return str;
}
