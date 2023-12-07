#include "lists.h"
/**
 * sum_dlistint - this sums of all data in the dlistint_t list
 * @head: a head of linked list
 * Return: sum of all data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int k;
	dlistint_t *c_node = head;

	if (head == NULL)
		return (0);
	for (k = 0; c_node != NULL; c_node = c_node->next)
		k += c_node->k;
	return (k);
}
