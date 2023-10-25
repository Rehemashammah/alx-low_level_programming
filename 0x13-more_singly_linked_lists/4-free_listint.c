#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint- function to free list
 * @head: Head node
 * Return: Freed list
 */

void free_listint(listint_t *head)
{
	listint_t *currentNode, *next;

	currentNode = head;

	while (currentNode != NULL)
	{
		next = currentNode->next;
		free(currentNode);
		currentNode = next;
	}
}
