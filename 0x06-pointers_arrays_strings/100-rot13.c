#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string
 * Return: the new string
 */
char *rot13(char *str)
{
	int i;

	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == alph[i])
			{
				*str = rot13[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
