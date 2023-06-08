#include "main.h"

/**
 * flip_bits - function that returns the number of bits to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int value;
	unsigned long int frame = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		value = frame >> x;
		if (value & 1)
			count++;
	}

	return (count);
}
