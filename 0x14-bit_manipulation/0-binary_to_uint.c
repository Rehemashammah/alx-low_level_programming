#include "main.h"

/**
 * binary_to_uint- Convert binary to unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number, 0 if more than one char, 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	unsigned int decimal = 1;
	int i;
	int len = strlen(b);

	if (b == NULL)
	{
		return (0);
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (0);
		}
		if (b[i] == '1')
			total += decimal;
		decimal *= 2;
	}
	return (total);
}
