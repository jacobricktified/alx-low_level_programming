#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to get.
 * Return: A pointer to the nth node of the listint_t list
 * and NULL if it failed.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp = head;

	while (temp && (counter < index))
	{
		temp = temp->next;
		counter++;
	}

	if (counter < index)
		return (NULL);

	return (temp);
}
