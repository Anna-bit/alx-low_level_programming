#include "main.h"

/**
 * _islower - checks the code for lowercase character,
 *@c: Character to be checked,
 * Return: Always 1 for success or 0 for anything else.
 */
int _islower(int c)

{
if (c >= 97 && c <= 122)
{ 
return (1);
}
return (0);
}
