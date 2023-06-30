#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - function that prints a buffer
 * @b: pointer to the buffer
 * @size: the buffer
 */

void print_buffer(char *b, int size)
{
	int i, j, count;
	unsigned char c;
	count = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (j = i ; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x", b[j] & 0xFF);
				count++;
				if ((count % 2) == 0)
					printf(" ");
			}
			else
			{
				printf(" ");
			}
		}
		printf(" ");

		for (j = i ; j < i + 10; j++)
		{
			if (j < size )
			{
				c = b[j];
				printf("%c", isprint(c) ? c : '.');
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}
