#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint- Function that returns the sum of all data (n)
 * @head: The head pointer
 * Return: O if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
