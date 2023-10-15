#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- Function to return the sum
 * @n: Fixed parameter to count the number of variables
 *
 * Return: Sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
