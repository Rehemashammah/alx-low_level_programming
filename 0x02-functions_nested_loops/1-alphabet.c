#include "main.h"

/**
 * print_alphabet - Entry point of our function
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c >= 'a' && c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
