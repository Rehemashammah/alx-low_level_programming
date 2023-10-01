#include <stdio.h>

/**
 * main - main function
 * @x: argument to give the number of command line arguments
 * @y: array of command line arguments
 * Return: Always 0 on success
 */

int main(int x, char *y[])
{
	int count = 0;

	while (x--)
	{
		y++;
		count++;
	}
	printf("%d\n", count - 1);
	return (0);
}
