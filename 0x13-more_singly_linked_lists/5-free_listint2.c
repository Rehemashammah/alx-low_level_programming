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
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
