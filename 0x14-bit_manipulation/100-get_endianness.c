#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: first value stored, 0 big endian, 1 little
 */

int get_endianness(void)
{

	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}
