#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate s1 and n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
