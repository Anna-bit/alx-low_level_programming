#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to first node in the list
 *
 * Return: number of elements in list
 */
size_t free_listint_safe(listint_t **h)
{
size_t llength = 0;
int i;
listint_t *temp;
if (!h || !*h)
return (0);
while (*h)
{
i = *h - (*h)->next;
if (i > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
llength++;
}
else
{
free(*h);
*h = NULL;
llength++;
break;
}
}
*h = NULL;
return (llength);
}
