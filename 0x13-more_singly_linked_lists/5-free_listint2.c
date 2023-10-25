#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2- Function that frees a list and sets head to NULL
 * @head: pointer to a pointer
 * Return: freed list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
