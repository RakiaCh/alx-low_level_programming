#include "function_pointers.h"

/**
 * array_iterator - execute function on an array via a function ptr
 * @array: array
 * @size: size of array
 * @action: pointer to function that we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (action && array)
		while (size--)
			action(*(array++));

}
