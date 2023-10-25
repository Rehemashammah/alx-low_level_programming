#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len- Function that returns the number of elements
 * @h: The head node
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
