#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int x;

	x = abs(n);

	_putchar(x % 10);

	return (x % 10);
}
