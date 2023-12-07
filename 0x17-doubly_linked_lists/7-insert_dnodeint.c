#include "lists.h"

/**
 * insert_dnodeint_at_index - this adds node at nth index
 * @h: a head of node
 * @idx: an index
 * @n: a struct int
 * Return: dlistint_t
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr;
	unsigned int count = 0;

	if (h == NULL || n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;
	n_node->prev = NULL;
	curr = *h;

	if (idx == 0)
	{
		n_node = add_dnodeint(h, n);
		return (n_node);
	}
	while (curr)
	{
		if (curr->next == NULL && count == idx - 1)
		{
			n_node = add_dnodeint_end(h, n);
			return (n_node);
		}
		else if ((idx - 1) == count)
		{
			n_node->next = curr->next;
			n_node->prev = curr;
			curr->next->prev = n_node;
			curr->next = n_node;
			return (n_node);
		}
		count++;
		curr = curr->next;
	}
	free(n_node);
	return (NULL);
}
