#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - function that returns the number of elements in linked lists
 * @h: linked list type
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
