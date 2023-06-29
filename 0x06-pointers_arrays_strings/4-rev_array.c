#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int x;

	for (i = 0, j = n - 1 ; i < j ; i++, j--)
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
	}
}
