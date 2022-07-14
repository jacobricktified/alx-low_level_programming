#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: pointer to the head of the list_t list
 *
 * Return: the number of elements in the list_t list
 */

size_t list_len(const list_t *h)
{
	size_t count_node = 1;

	/*if head is null return 0 nodes*/
	if (h == NULL)
		return (0);

	/*iterate through the nodes*/
	while (h->next != NULL)
	{
		/*go to the next node*/
		h = h->next;
		/*count node*/
		count_node++;
	}

	return (count_node);
}

