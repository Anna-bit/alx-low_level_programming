#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to first element in the linked list
 *
 * Return: data in the deleted elements or 0 if list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *i;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	i = (*head)->next;
	free(*head);
	*head = i;

	return (x);
}
