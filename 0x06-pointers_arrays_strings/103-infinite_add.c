#include "main.h"
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
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = (len1 > len2) ? len1 : len2;
	int carry = 0;

	if (max_len >= size_r - 1)
	{
		return 0;
	}

	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = digit1 + digit2 + carry;
		carry = sum / 10;
		int digit = sum % 10;

		r[k] = digit + '0';

		i--;
		j++;
		k++;
	}

	r[k] = '\0';

	int left = 0;
	int right = k - 1;
	while (left < right)
	{
		char temp = r[left];
		r[left] = r[right];
		r[right] = temp;
		left++;
		right--;
	}

	return r;
}

