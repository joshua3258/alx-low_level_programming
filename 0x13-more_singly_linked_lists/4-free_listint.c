#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head of the node
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
