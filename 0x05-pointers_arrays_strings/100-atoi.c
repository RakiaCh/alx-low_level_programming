#include "main.h"
#include <stdbool.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: the string
 * Return: the number if exists, otherwise return 0
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int digit = 0;

	while (s[i] == ' ' || s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
			{
				if (sign == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}

			result = result * 10 + (s[i] - '0');
			digit = 1;
		}
		else if (digit)
		{
			break;
		}
		i++;
	}

	return (sign * result);
}
