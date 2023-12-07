#include "lists.h"
/**
 * free_dlistint - this function frees a dlistint_t list
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *c_node;

	while (head != NULL)
	{
		c_node = head->next;
		free(head);
		head = c_node;
	}
}
