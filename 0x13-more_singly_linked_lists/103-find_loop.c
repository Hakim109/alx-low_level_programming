#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head.
 *
 * Return: the address of the node.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n;
	listint_t *p;

	n = head;
	p = head;
	while (head && n && n->next)
	{
		head = head->next;
		n = n->next->next;

		if (head == n)
		{
			head = p;
			prev = n;
			while (1)
			{
				n = p;
				while (n->next != head && n->next != prev)
				{
					n = n->next;
				}
				if (n->next == head)
					break;

				head = head->next;
			}
			return (n->next);
		}
	}

	return (NULL);
}
