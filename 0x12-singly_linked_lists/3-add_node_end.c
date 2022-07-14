#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list_t list
 * @str: The string to be added to the list_t list.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t i = 0;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	new->str = strdup(str) ? strdup(str) : (NULL);
	new->len = i;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		temp = *head;
		/*Use temp->next instead of just temp*/
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
