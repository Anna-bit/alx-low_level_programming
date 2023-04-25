#include "main.h"
/**
 * _isalpha - check the code for alphabetic character,
 *@c: The character to be checked
 * Return: Always 1 for alphabetic character or 0 for anything else.
 */
int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
