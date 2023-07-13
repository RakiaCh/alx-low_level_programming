#include "main.h"
#include <stdlib.h>

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to the memory previously allocated
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (realloc(NULL, new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = realloc(ptr, new_size);
	return (new_ptr);
}
