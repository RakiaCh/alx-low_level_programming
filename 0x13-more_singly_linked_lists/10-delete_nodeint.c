#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer of linked list
 * @index: index to delete node
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *p1, *p2;

	if (*head == NULL)
		return (-1);

	p1 = *head;

	if (index == 0)
	{
		*head = p1->next;
		free(p1);
		return (1);
	}

	while (i < (index - 1) && p1 != NULL)
	{
		p1 = p1->next;
		i++;
	}

	if (i != (index - 1) || p1->next == NULL)
		return (-1);

	p2 = p1->next;
	p1->next = (p1->next)->next;
	free(p2);

	return (1);
}
