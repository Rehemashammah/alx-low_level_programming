#include "main.h"

/**
 * _strlen - Function to prin the length of a string
 * @s: Parameter passed
 * Return: length of your string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
