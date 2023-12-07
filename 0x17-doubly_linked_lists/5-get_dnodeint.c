#include "lists.h"
/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  * @head: head pointer of the list
  * @index: the index of the node, starting from 0
  * Return: node or NULL
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int k = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (curr != NULL)
	{
		if (k == index)
		{
			return (curr);
		}
		k++;
		curr = curr->next;
	}
	return (NULL);
}
