#include "main.h"
#include <string.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: the first string
 * @needle: the second string
 * Return: a pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
