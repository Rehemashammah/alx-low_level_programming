#include "lists.h"

/**
 * list_len - Return number of elements in a linked list
 * @h: Head pointer
 * Return: counter
 */

size_t list_len(const list_t *h)
{
	int counter;

	counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
