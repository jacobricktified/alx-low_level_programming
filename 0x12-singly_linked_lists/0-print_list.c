#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list_t list
 * Return: the number of elements in the list_t list
 */

size_t print_list(const list_t *h)
{
	size_t count_node = 1;

	/*return 0 as number of nodes*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*if str is NULL return len as 0 and str as (nil)*/
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		/*go to the next node*/
		h = h->next;
		/*count number of nodes*/
		count_node += 1;
	}

	/*print for the last node*/
	printf("[%d] %s\n", h->len, h->str);

	return (count_node);
}

