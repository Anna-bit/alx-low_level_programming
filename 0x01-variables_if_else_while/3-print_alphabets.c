#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet without q and e 
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
