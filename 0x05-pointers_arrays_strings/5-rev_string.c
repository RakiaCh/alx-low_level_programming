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
	char c;

	len = strlen(s);

	for (i = 0 ; i <= (len / 2) ; i++)
        {
		c = s[i];
		s[i] = s[len - i];
		s[len - i] = c;
        }
}
