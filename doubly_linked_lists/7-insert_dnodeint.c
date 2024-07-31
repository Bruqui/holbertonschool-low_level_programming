#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: a pointer to the head of the dlistint_t list.
 * @idx: the index of the list where the new node should be added.
 * @n: The integer for the new node to contain
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	if (current == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));

	else if (current == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current->next;
	new->prev = current;

	if (current->next)
		current->next->prev = new;

	else
	{
		free(new);
		return (NULL);
	}

	current->next = new;

	return (new);
}
