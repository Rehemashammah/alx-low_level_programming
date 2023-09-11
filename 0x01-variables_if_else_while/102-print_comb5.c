#include <stdio.h>
/**
 * main - Entry point
 * Return:0 (Successs)
 */
int main(void)
{
	int num1 = 0;

	while (num1 <= 99)
	{
		int num2 = num1;

		while (num2 <= 99)
		{
			putchar('0' + (num1 / 10));
			putchar('0' + (num1 % 10));
			putchar(' ');
			putchar('0' + (num2 / 10));
			putchar('0' + (num2 % 10));

			if (num1 != 99 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
