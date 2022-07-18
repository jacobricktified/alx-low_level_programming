#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the begining of a listint_t list
 * @n: The data to add to the new node
 * @head: A pointer to the head of the listint_t list.
 * Return: A pointer to the new node or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}

