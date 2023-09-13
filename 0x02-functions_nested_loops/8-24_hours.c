#include "main.h"
/**
 * jack_bauer - Function definition
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int hrs, min;

	for (hrs = 0; hrs < 24; hrs++)
	{
	for (min = 0; min < 60; min++)
	{
	_putchar(hrs / 10 + 48);
_putchar(hrs % 10 + 48);
_putchar(':');
_putchar(min / 10 + 48);
_putchar(min % 10 + 48);
_putchar('\n');
	}
	}
}
