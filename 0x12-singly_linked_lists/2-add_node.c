#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: a pointer to a pointer to the head of the list
 * @str: the string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
