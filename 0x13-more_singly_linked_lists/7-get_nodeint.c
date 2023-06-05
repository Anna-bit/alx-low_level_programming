#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function returns node at certain index in linked list
 * @head: first node
 * @index: index of the node to return
 *
 * Return: index of the node, or NULL if non existent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
