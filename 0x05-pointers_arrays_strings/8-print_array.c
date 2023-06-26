#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d, ", a[i]);
	}
	print("%d\n", a[i]);
}

