#include <stdio.h>

/**
 * main - Print all arguments received
 * @argc: The number of command line arguments
 * @argv: Array of command line arguments
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
