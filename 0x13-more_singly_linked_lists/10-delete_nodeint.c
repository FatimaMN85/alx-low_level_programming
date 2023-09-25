#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: pointer
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	prev = NULL;

	for (i = 0; i < index; i++)
	{
		prev = current;
		current = current->next;

		if (current == NULL)
		{
			return (-1);
		}
	}
	prev->next = current->next;
	free(current);

	return (1);
}
