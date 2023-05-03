#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: number of elements of the array to be printed
 * Return: a and n values
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
	           print_array("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			print_array("%d", a[n - 1]);
		}
			putchar("\n");
}
