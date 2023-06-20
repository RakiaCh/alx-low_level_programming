#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i = 1;
	long a = 1;
	long b = 2;

	while (i < (50 / 2))
	{
		printf("%li, %li, ", a, b);
		a += b;
		b += a;
		i++;
	}

	printf("%li, %li", a, b);

	printf("\n");

	return (0);
}
