#include "lists.h"
/**
  * print_dlistint - prints a doubly linked list
  * @h: Head list
  * Return: Number of items in the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
