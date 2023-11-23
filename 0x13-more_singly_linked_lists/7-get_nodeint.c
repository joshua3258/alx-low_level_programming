#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a linked list
 * @head: head of a pointing node
 * @index: indext starting at 0
 * Return: if the node does not exist retun NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
