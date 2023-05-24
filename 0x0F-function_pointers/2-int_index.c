#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function to be used to compare val
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
