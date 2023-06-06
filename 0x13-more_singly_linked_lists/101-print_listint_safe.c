#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * looped_listint_len - function that counts unique nodes no
 * @head: pointer to head of the list
 *
 * Return:(- 0) if list not looped else no of unique nodes
 **/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *elephant, *lion;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
elephant = head->next;
lion = (head->next)->next;
while (lion)
{
if (elephant == lion)
{
elephant = head;
while (elephant != lion)
{
nodes++;
elephant = elephant->next;
lion = lion->next;
}
elephant = elephant->next;
while (elephant != lion)
{
nodes++;
elephant = elephant->next;
}
return (nodes);
}
elephant = elephant->next;
lion = (lion->next)->next;
}
return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: pointer to the head
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
size_t list, index = 0;
list = looped_listint_len(head);
if (list == 0)
{
for (; head != NULL; list++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < list; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (list);
}
