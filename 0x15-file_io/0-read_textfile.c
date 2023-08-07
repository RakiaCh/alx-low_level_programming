#include "main.h"

/**
 * read_textfile - read a certain size and prints to std output
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, n_read, n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	n_read = read(op, buffer, letters);
	n_wrote = write(STDOUT_FILENO, buffer, n_read);

	if (op == -1 || n_read == -1 || n_wrote == -1 || n_wrote != n_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (n_wrote);
}
