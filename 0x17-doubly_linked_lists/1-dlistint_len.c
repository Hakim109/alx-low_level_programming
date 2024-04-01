#include "lists.h"

/**
 * dlistint_len - prints linked list elements
 * @h: head list
 * Return: nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

		if (!h)
			return (0);
		while (h)
		{
			h = h->next;
			count++;
			}

	return (count);

}
