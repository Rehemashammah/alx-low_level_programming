#include "main.h"
/**
 * print_last_digit - Function definition to print last digit
 * @a: parameter to be passed
 * Return: Last digit of a number
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		b *= -1;
	}
	_putchar(b + '0');

	return (b);
}
