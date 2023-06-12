#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 for success and -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}