#include "main.h"
#include <string.h>

/**
 * puts_half - a function that prints  half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int len;
	int i;
	int n;

	len = strlen(str);

	if ((len % 2) == 0)
	{
		n = len / 2;
		for (i = n ; i < len ; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n + 1 ; i < len ; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
