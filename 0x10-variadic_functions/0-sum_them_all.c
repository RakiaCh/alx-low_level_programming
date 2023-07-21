#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{

	register unsigned int i;
	int sum = 0;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
