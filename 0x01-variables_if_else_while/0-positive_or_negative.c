#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point,
* 
* Return: Always 0 success
*/

int main(void)
{      
int n;
        
srand(time(0));
n = rand() - RAND_MAX / 2;
	
if (n > 0)
{
printf("is positive");
}
else if (n == 0)
{
printf("is zero");
}
else 
{
printf("is negative");
}
putchar('\n');
return (0);
}
