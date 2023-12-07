#include "lists.h"
/**
 * add_dnodeint - this adds new node at the beginning of a dlistint_t list
 * @head: head of list
 * @n: a number to add in new node
 * Return: Address of new node or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));

	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;
	if (*head != NULL)
		(*head)->prev = n_node;
	*head = n_node;
	return (n_node);
}
