#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to head of list
 * Return: number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t* current;
	listint_t* next;

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		size++;
	}

	*h = NULL;
	return (size);
}
