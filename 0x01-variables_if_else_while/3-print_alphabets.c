#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (1)
	{
		if ((ch >= 'a' && ch <= 'z')  || (ch >= 'A' && ch <= 'Z'))
		{
			putchar (ch);
		}
		else
		{
			break;
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
