#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on success
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long primeFactor = 2;

	while (primeFactor < number)
	{
		if (number % primeFactor == 0)
		{
			number /= primeFactor;
			primeFactor = 2;
		}
		else
			PrimeFactor++;
	}
	printf("%lu\n", number );
	return (0);
}
