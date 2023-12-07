#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - this checks the code
 * Return: Always EXIT_SUCCESS.
 */

int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t k;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->k = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    k = print_dlistint(head);
    printf("-> %lu elements\n", k);
    free(new);
    return (EXIT_SUCCESS);
}
