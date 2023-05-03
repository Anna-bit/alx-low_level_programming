#include "main.h"

/**
 * puts_half - a function that prints second half of a string
 * @str: value
 * Return: half of value
 */
void puts_half(char *str)
{
	int a, b, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	b = (longi / 2);

	if ((longi % 2) == 1)
		b = ((longi + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
