#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}

