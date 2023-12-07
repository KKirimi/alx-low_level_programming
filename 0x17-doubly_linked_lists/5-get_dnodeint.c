#include "lists.h"
/**
 * get_dnodeint_at_index - this returns nth node of a dlistint_t list
 * @head: a head of the linked list
 * @index: an index of node to return
 * Return: Address of nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;
	dlistint_t *c_node = head;

	if (head == NULL)
		return (NULL);
	for (k = 0; c_node != NULL; c_node = c_node->next)
	{
		if (k == index)
			return (c_node);
		k++;
	}
	return (NULL);
}
