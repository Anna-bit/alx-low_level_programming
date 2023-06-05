#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -function that returns sum of all the data in a linked list
 * @head: first node in the list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporal = head;

	while (temporal)
	{
		sum += temporal->n;
		temporal = temporal->next;
	}

	return (sum);
}
