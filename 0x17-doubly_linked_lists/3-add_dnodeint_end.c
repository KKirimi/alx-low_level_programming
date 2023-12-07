#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of a dlistint_t list
 * @head: head of list
 * @n: number to add in new_node
 * Return: Address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));
	dlistint_t *c_node = *head;

	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}
	while (c_node->next != NULL)
		c_node = c_node->next;
	c_node->next = n_node;
	n_node->prev = c_node;
	return (n_node);
}
