#include "main.h"

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
		_putchar('\n');

	for (x = 1 ; x <= size ; x++)
	{
		for (y = 1 ; y <= (size - x); y++)
			_putchar(' ');

		for (z = 1 ; z <= x ; z++)
			_putchar('#');

		_putchar('\n');
	}
}
