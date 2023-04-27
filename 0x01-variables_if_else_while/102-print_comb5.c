#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int c, d;

for (c = 0; d < 100; d++)
{
for (d = 0; d < 100; d++)
{
if (c < d)
{
putchar((c / 10) + 48);
putchar((c % 10) + 48);
putchar(' ');
putchar((d / 10) + 48);
putchar((d % 10) + 48);
if (c != 98 || d != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
