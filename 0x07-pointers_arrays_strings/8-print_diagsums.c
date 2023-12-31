#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the matrix
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += *(a + i * size + i);

	for (j = 0; j < size; j++)
		sum2 += *(a + size * (j + 1) - (j + 1));

	printf("%i, %i\n", sum1, sum2);
}
