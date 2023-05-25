#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints strings
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * 
 */
void print_strings(const char *separator, const unsigned int x, ...)
{
	va_list stringsl;
	char *str;
	unsigned int index;

	va_start(stringsl, x);

	for (index = 0; index < x; index++)
	{
		str = va_arg(stringsl, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (x - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(stringsl);
}
