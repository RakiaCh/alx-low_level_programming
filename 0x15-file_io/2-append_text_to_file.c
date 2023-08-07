#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text and only if file exists
 * @filename: file
 * @text_content: appends this content into file
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n_wrote;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	n_wrote = write(fd, text_content, strlen(text_content));
	if (n_wrote == -1 || n_wrote != strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
