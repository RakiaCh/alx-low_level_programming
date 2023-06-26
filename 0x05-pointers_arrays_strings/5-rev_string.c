#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 * @s: the string
 */

void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char c;

	len = strlen(s);

	for (i = 0, j = len - 1 ; i < j ; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
