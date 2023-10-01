#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument passed
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
