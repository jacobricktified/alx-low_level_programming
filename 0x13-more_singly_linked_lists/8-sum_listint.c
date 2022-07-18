#include "lists.h"

/**
 * sum_listint - Sums the values of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * Return: The sum of the values of the listint_t list
 * and 0 if the list is NULL.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
