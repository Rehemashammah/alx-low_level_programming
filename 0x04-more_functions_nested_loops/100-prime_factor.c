#include <stdio.h>
/**
 * main - Entry point to print largest prime number
 * Return: 0 on Success
 */
int main(void)
{
	long i, num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % 1 == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
