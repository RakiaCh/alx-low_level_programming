#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int x;

	if (n == INT_MIN)
	{
		_putchar('0' + '8');

		return (8);
	}
	else
	{
		x = abs(n);

		_putchar('0' + (x % 10));

		return (x % 10);
	}
}
