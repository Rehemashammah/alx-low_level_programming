#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint- Add new node at the beginning
 * @head: Pointer to a pointer to the head of the list
 * @n: value passed to add to the new node
 * Return: Address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	
	return (newNode);
}
