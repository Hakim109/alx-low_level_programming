#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Add a node at end
 * @head: head for new node
 * @n: new node data
 * Return: new node pointer
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode = malloc(sizeof(dlistint_t) * 1);

	if (NewNode == NULL)
		return (NULL);
	NewNode->prev = NULL;
	NewNode->next = (*head);

	if (*head != NULL)
		(*head)->prev = NewNode;
	*head = NewNode;


	NewNode->n = n;

	return (NewNode);
}
