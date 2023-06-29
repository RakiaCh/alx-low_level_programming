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
		if ( str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.' || str[i] == ',' || str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '"')
		{
			ch = str[i+1];
			str[i+1] = toupper(ch);
			i++;
		}
		else
		{
			i++;
		}
	}

	return (str);
}
