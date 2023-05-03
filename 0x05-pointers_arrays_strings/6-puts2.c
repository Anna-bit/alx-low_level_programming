#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * @str: string input
 * Return: 0 always.
 */

void puts2(char *str)
{
	int a = 0;

	while (str [a] != '\0')
	{
	if (a / 2 -- 0)
	   {
	     _putchar (str[a]);
	   }
	   a++;
	}
  	_putchar ('\n');
}
