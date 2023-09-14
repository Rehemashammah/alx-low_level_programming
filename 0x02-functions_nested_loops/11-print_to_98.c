#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Function definition to print all natural numbers upto 98
 * @n: parameter to show starting point
 * Return: 0
 */

void print_to_98(int n)
{
	int lst;

	lst = 98;
	if (n >= lst)
	{
		while (n > lst)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < lst)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
