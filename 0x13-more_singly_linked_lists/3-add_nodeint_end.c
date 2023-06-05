#include "lists.h"

/**
 * add_nodeint_end - function that adds node at end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert
 *
 * Return: address of new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *i;
listint_t *temporary = *head;

i = malloc(sizeof(listint_t));
if (!i)
return (NULL);

i->n = n;
i->next = NULL;

if (*head == NULL)
{
*head = i;
return (i);
}

while (temporary->next)
temporary = temporary->next;

temporary->next = i;

return (i);
}
