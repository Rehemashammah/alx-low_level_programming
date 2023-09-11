#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 16)
	{
		if (x >= 0 && x < 10)
		{
			putchar('0' + x);
		}
		else
		{
			putchar('a' + (x - 10));
		}
		x++;
	}
	putchar('\n');
	return (0);
}
