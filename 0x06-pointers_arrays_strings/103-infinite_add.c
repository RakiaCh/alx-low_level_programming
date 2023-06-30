#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: size of buffer
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, max_len, carry;
	int i, j, k;
	int digit, digit1, digit2;
	int sum, left, right;
	char temp;
	len1 = strlen(n1);
	len2 = strlen(n2);
	max_len = (len1 > len2) ? len1 : len2;
	if (max_len >= size_r - 1)
	{
		return 0;
	}
	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		digit = sum % 10;
		r[k] = digit + '0';
		i--;
		j--;
		k++;
	}
	r[k] = '\0';
	left = 0;
	right = k - 1;
	while (left < right)
	{
		temp = r[left];
		r[left] = r[right];
		r[right] = temp;
		left++;
		right--;
	}

	return (r);
}
