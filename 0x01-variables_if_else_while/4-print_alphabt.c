#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 **/
int main()
{
        char i;

        for (i = 'a'; i <= 'z'; i++)
        {
               if ((i != 'e') && (i != 'q'))
                     putchar(i);
        }
        putchar('\n');

        return (0);
}
