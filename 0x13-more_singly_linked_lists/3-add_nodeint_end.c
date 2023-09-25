#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: a pointer to a pointer of the head of the list
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_Node, *current;

	new_Node = malloc(sizeof(listint_t));
	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;

	if (*head == NULL)
	{
		*head = new_Node;
		return (new_Node);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_Node;

	return (new_Node);
}
