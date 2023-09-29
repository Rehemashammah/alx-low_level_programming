#include "main.h"

/**
 * _puts - Function to print a string
 * @str: Parameter passed
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
