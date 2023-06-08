#include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: number 
 * @index: index
 *
 * Return: value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
