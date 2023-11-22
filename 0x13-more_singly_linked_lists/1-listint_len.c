#include "lists.h"

/**
 * listint_len - function that returns the
 * number of element in a linked listint_t
 * @h: head of nodes
 * Return: always 0
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
