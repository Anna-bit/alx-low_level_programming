#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given pstn
 * @head: pointer to the first node in the list
 * @n: data to insert
 * @idx: index of the list
 *
 * Return: address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *node;
listint_t *temporal = *head;

node = malloc(sizeof(listint_t));
if (!node || !head)
return (NULL);

node->n = n;
node->next = NULL;

if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}

for (x = 0; temporal && x < idx; x++)
{
if (x == idx - 1)
{
node->next = temporal->next;
temporal->next = node;
return (node);
}
else
temporal = temporal->next;
}

return (NULL);
}
