#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 * @str: parameter passed
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; i < (int)(strlen(str)); i++)
	{
		if ((int)(strlen(str)) % 2 == 0 && i >= (int)strlen(str) / 2)
		{
			_putchar(str[i]);
		}
		else if ((int)(strlen(str)) % 2 != 0 && i > ((int)strlen(str) - 1) / 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
