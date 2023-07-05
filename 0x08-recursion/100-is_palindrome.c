#include "main.h"
#include<string.h>

/**
 * compare - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *head, char *tail)
{

	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (compare(head + 1, tail - 1));

	return (0);
}

/**
 * is_palindrome - check if palindrome
 * @s: the string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (compare(s, (s + len - 1)));
}
