#include "lists.h"

/**
 * sum_dlistint - returns the sum of  all n of a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * Return: The sum of all n in the list. If the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
