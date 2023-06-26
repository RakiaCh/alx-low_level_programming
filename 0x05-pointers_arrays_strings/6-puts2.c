#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 * @str: the string
 */

void puts2(char *str)
{
	int len;
	int i = 0;

	len = strlen(str);

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
