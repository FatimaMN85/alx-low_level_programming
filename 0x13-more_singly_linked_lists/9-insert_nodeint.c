#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: the index of the list
 * @n: the integer
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_N, *current;
	unsigned int i;

	new_N = malloc(sizeof(listint_t));
	if (head == NULL)
	{
		return (NULL);
	}
	new_N->n = n;
	if (idx == 0)
	{
		new_N->next = *head;
		*head = new_N;
		return (new_N);
	}
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_N);
			return (NULL);
		}
		current = current->next;
	}
	new_N->next = current->next;
	current->next = new_N;

	return (new_N);
}
