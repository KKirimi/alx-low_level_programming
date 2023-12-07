#include "lists.h"
/**
 * delete_dnodeint_at_index - this deletes a node at index
 * @head: a head of list to delete node
 * @index: an index of node to delete
 * Return: 1 if success or -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int k;
	dlistint_t *cur_node = *head;
	dlistint_t *last_node;
	dlistint_t *n_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		n_node = cur_node->next;
		free(cur_node);
		if (n_node != NULL)
			n_node->prev = NULL;
		*head = n_node;
		return (1);
	}
	for (k = 0; cur_node != NULL; cur_node = cur_node->next)
	{
		if (k == index)
		{
			last_node = cur_node->prev;
			n_node = cur_node->next;
			free(cur_node);
			last_node->next = n_node;
			if (n_node != NULL)
				n_node->prev = last_node;
			return (1);
		}
		k++;
	}
	return (-1);
}
