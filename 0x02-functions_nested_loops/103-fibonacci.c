#include <stdio.h>

/**
* main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int c;
unsigned long int a, b, next, sum;

a = 1;
b = 2;
sum = 0;

for (c = 1; c <= 33; ++c)
{
if (a < 4000000 && (a % 2) == 0)
{
sum = sum + a;
}
next = a + b;
a = b;
b = next;
}
printf("%lu\n", sum);
return (0);
}
