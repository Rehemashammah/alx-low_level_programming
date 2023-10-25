#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end- Pointer to a function that adds a new node at the end
 * @head: Pointer to a pointer to the head of the list
 * @n: Value passed
 * Return: Address to the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}
