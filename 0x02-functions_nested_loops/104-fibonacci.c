#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i = 1;
	unsigned long a = 1;
	unsigned long b = 2;

	while (i < (98 / 2))
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
