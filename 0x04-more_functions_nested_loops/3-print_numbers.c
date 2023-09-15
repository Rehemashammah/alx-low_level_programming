#include "main.h"
/**
 * print_numbers - Function to print numbers
 * Return: 0 on success
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
