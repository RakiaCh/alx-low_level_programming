#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change all lowercase to uppercase
 * @str: the string
 * Return: the new string
 */

char *cap_string(char *str)
{
	int i = 0;

	char ch;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
		    && (str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}' || str[i - 1] == ' ' || str[i - 1] == '\t'
			|| str[i - 1] == '\n'))
		{
			ch = str[i];
			str[i] = toupper(ch);
		}

		i++;
	}

	return (str);
}
