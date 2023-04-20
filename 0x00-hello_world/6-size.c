#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i;
  char c;
  long int l;
  long long int lu;
  float f;

printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(l));
printf("Size of a long long int: %d byte(s)\n", sizeof(lu));
printf("Size of a float: %d byte(s)\n", sizeof(f)); 
return (0);
}
