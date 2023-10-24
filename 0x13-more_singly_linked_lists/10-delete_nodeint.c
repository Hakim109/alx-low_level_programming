#include "lists.h"

/**
 * delete_nodeint_at_index - deletes index node
 * @head: head of a list.
 * @index: index of node
 *
 * Return: 1 if succes, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *n;
	listint_t *next;

	n = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && n != NULL; i++)
		{
			n = n->next;
		}
	}

	if (n == NULL || (n->next == NULL && index != 0))
	{
		return (-1);
	}

	next = n->next;

	if (index != 0)
	{
		n->next = next->next;
		free(next);
	}
	else
	{
		free(n);
		*head = next;
	}

	return (1);
}
