#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int alpha;

	for (n = '0' ; n <= '9'; n++) /*print 0-9*/
	{
		putchar(n);
	}

	for (alpha = 'a' ; alpha <= 'f' ; alpha++) /*print a-f to finish hexbase*/
	{
	       	putchar(alpha);
	}

	putchar('\n');

	return (0);
}
