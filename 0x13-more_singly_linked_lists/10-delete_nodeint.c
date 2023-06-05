#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node at index
 * @head: pointer to first element
 * @index: index of node that should be deleted
 *
 * Return: 1 if it succeeds or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temporal = *head;
listint_t *node = NULL;
unsigned int x = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temporal);
return (1);
}

while (x < index - 1)
{
if (!temporal || !(temporal->next))
return (-1);

temporal = temporal->next;
x++;
}

node = temporal->next;
temporal->next = node->next;
free(node);

return (1);
}
