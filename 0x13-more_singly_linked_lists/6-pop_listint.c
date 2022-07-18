#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Removes the head node of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list
 * Return: The address of the new element, or NULL if it failed.
 */

int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;
	int n;

	if (*head == NULL)
		return (0);

	node_to_delete = *head;
	*head = node_to_delete->next;
	n = node_to_delete->n;
	free(node_to_delete);

	return (n);
}
