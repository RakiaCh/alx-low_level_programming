#include "function_pointers.h"

/**
 * main - print opcodes of its own main function
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0 if no errors
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;
       	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]);
	}
	printf("\n");

	return (0);
}
