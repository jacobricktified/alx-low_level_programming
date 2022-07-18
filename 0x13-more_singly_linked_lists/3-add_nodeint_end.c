#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @n: The data to add to the new node
 * @head: A pointer to the head of the first node of the listint_t list.
 * Return: he address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head;
	listint_t *lastnode;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = NULL;

	if (*head == NULL)
	{
		*head = new_head;
		return (new_head);
	}

	else
	{
		lastnode = *head;
		while (lastnode->next)
			lastnode = lastnode->next;
		lastnode->next = new_head;
	}
	return (new_head);
}
