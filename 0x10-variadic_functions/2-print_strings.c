#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- Function that prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 *
 * Return: String
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *ap;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		ap = va_arg(str, char *);

		if (ap)
		{
			printf("%s", ap);
		}
		else
		{
			printf("(nil)");
		}

		if (separator  && i < (n - 1))
		{
			printf("%s", separator);
		}

	}

	printf("\n");
	va_end(str);
}
