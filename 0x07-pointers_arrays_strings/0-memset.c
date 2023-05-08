#include "main.h"
include <stdio.h>

/**
 *main - function that fills memory with a constant byte.
 *
 *Return: 0 always success
 */
int main(void)
{
char *s = 'hello';
char f*;

f = _strchr (s, 'l');
	if (f != NULL)
	{
	printf ("%s\n", f);
	}
        return (0);
}
