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

	while (i <= 50)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
		i++;
	}

	printf("\n");

	return (0);
}
