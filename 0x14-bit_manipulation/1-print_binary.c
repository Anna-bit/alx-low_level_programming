#include "main.h"

/**
 * print_binary - function that prints the binary representation of no
 * @n: no to print
 */

void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int value;

	for (x = 63; x >= 0; x--)
	{
		value = n >> x;

		if (value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
