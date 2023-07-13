#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * is_valid_number - check if the input is a nubmer
 * @num: the number to check
 * Return: true if success, false otherwise
 */

bool is_valid_number(char *num)
{
	int i;
	
	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isdigit(num[i]))
			return (false);
	}
	return (true);
}

/**
 * multiply_numbers - multiplies two numbers and displays it
 * @num1: first number
 * @num2: second number
 */

void multiply_numbers(char *num1, char *num2)
{
	unsigned long long n1;
	unsigned long long n2;
	unsigned long long result;
	n1 = strtoull(num1, NULL, 10);
	n2 = strtoull(num2, NULL, 10);
	result = n1 * n2;
	printf("Result: %llu\n", result);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		printf("Error\n");
		return (98);
	}

	multiply_numbers(num1, num2);

	return 0;
}
