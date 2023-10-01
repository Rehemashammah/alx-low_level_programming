#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * calculate_cents -function to calculate cents
 * @num: parameter passed
 * Return: coins
 */

int calculate_cents(int num)
{
	int coins = 0;

	while (num)
	{
		if (num >= 25)
		{
			num -= 25;
		}
		else if (num >= 10)
		{
			num -= 10;
		}
		else if (num >= 5)
		{
			num -= 5;
		}
		else if (num >= 2)
		{
			num -= 2;
		}
		else if (num >= 1)
		{
			num -= 1;
		}
		coins++;
	}
	return (coins);
}

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument passed
 * Return: Always 0 on success
 */

int main(int argc, char **argv)
{
	int number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);

	if (number < 0)
	{
		printf("0\n");
		return (1);
	}
	printf("%d\n", calculate_cents(number));
	return (0);
}

