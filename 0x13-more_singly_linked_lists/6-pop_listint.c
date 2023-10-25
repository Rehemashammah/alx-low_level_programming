#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint- Function that deletes the head node
 * @head: pointer to pointer pointing the head node
 * Return: Head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	x = temp->n;
	*head = (*head)->next;
	free(temp);
	return (x);
}
