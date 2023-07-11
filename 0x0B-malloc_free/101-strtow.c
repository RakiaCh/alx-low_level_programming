#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int i, j, k, len;
	char **words = NULL;

	int word_count = 0;
	int in_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			in_word = 1;
			word_count++;
		}
		else if (str[i] == ' ')
		{
			in_word = 0;
		}
	}

	/* Allocate memory for the array of words */
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	in_word = 0;

	/* Split the string into words */
	for (k = 0; k <= word_count; k++)
	{
		/* Find the length of the word */
		len = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			len++;
			i++;
		}

		/* Allocate memory for the word */
		words[k] = (char *)malloc((len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			/* Free previously allocated memory on failure */
			for (k = 0; k < word_count; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		/* Copy the word into the array */
		j = 0;
		while (j < len)
		{
			words[k][j] = str[i - len + j];
			j++;
		}
		words[k][j] = '\0';

		/* Move to the next word */
		while (str[i] == ' ')
			i++;
	}

	words[word_count] = NULL;

	return (words);
}

