#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the first node
 *
 * Return: pointer to the first node
 **/

listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}

*head = previous;

return (*head);
}
