#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet, followed by new line
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
