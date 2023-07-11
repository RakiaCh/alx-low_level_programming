#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: Array of strings containing the arguments.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0, len = 0;
	int i, j;
	char *concat_str;
	int index;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	concat_str = malloc(sizeof(char) * (total_length + 1));
	if (concat_str == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);

		for (j = 0; j < len; j++)
		{
			concat_str[index] = av[i][j];
			index++;
		}

		concat_str[index] = '\n';
		index++;
	}

	concat_str[index] = '\0';

	return (concat_str);
}

