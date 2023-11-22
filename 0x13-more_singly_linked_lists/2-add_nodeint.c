#include "lists.h"

/**
 * add_nodeint - function that add new node
 * @head: head of node pointer which the head
 * point to the first node
 * @n: new integer to be created
 * Return: the number of element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (*head);
}
