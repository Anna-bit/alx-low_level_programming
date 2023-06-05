#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temporal;

	while (head)
	{
		temporal = head->next;
		free(head);
		head = temporal;
	}
}
