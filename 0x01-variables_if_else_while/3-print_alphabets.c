#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char x = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
