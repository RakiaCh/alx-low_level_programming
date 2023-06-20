#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int i;
	int j;
	int multip;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 8 ; j++)
		{
			multip = i * j;

			_putchar(multip);
			_putchar(',');
			_putchar(' ');
		}

		_putchar(i * j);
		_putchar('$');
		_putchar('\n');
	}
}
