#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: head of pointing node
 * Return: the function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;

	}
	free(*head);
	*head = NULL;
}
