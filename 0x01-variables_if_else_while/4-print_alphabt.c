#include <stdio.h>
/**
 * main - Program entry point
 * Return:0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c >= 'a' && c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
