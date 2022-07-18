#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 */

void free_listint(listint_t *head)
{
	listint_t *placeholder;

	while (head)
	{
		placeholder = head->next;
		free(head);
		head = placeholder;
	}
}

