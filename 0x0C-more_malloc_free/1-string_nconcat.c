#include "main.h"
#include <string.h>

/**
 * string_nconcat - Funcion to concatenate two strings
 * @s1: String one
 * @s2: String two
 * @n: Number of s2 to be concatenated
 *
 * Return: Pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if ((s1 == NULL) && (s2 == NULL))
	{
		return ("");
	}
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; (i < n) && (len2 != '\0'); i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[len1 + i] = '\0';
	return (ptr);
}
