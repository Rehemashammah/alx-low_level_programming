#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
