#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 * @str: parameter passed
 * Return: Always 0
 */

void puts_half(char *str)
{
	int len;
	int i;
	int j;

	len = strlen(str);
	i = len / 2;

	for (j = i; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
