#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint- Function that prints all the elements of a list
 * @h: The list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
