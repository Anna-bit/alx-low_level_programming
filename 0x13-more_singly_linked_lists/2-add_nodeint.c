#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to first node in list
 * @n: data to insert
 *
 * Return: address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *x;

x = malloc(sizeof(listint_t));
if(!x)
return (NULL);

x->n = n;
x->next = *head;
*head = x;

return (x);
}
