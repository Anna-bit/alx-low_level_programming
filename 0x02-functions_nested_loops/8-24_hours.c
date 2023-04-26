#include "main.h"
	
/**
 * main - Entry point,
 *
 * Return: Always 0 success.
 */
int main(void)		
{	
int i;

print_last_digit(98);
print_last_digit(0);
i = print_last_digit(-1024);
_putchar(i + '0');
_putchar('\n');
return (0);
}
