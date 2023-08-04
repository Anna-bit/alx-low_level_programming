#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: pointer to the number
 * @index: index of bit
 *
 * Return: 1 for success and -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
