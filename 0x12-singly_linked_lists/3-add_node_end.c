#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: new element address or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
list_t *thread = *head;
unsigned int len = 0;

while (str[len])
len++;

node = malloc(sizeof(list_t));
if (!node)
return (NULL);

node->str = strdup(str);
node->len = len;
node->next = NULL;

if (*head == NULL)
{
*head = node;
return (node);
}

while (thread->next)
thread = thread->next;

thread->next = node;

return (node);
}
