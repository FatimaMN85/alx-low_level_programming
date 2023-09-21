#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: A pointer to a pointer to the head of the list
 * @str: the string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newN = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);
	if (newN == NULL)
		return (NULL);

	newN->str = strdup(str);
	if (newN->str == NULL)
	{
		free(newN);
		return (NULL);
	}
	newN->len = strlen(str);
	newN->next = NULL;

	if (*head == NULL)
	{
		*head = newN;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newN;
	}

	return (newN);
}
