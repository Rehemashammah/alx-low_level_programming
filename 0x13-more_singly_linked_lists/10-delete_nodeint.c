#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index- Function that deletes node at given index
 * @head: Pointer to a pointer to the head node
 * @index: Index of the node to be deleted
 * Return: 1 if success -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *current = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			temp = *head;
			if (i == 0)
			{
				*head = temp->next;
				free(temp);
				return (1);
			}
			current->next = temp->next;
			free(temp);
			return (1);
		}
		else if ((i + 1) == index)
			current = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * listint_len- count elements in linked list
 * @h: head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count++;
		cursor = cursor->next;
	}
	return (count);
}
