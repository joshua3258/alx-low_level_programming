#include "lists.h"

/**
 * pop_listint - function that delete the head of a node
 * of linked list and return the node's data
 * @head: head of the pointing node
 * Return: return 0 if the linkrd list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
