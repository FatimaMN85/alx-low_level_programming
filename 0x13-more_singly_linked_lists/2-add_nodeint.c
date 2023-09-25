#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to a pointer to the head
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nNode = malloc(sizeof(listint_t));

	if (nNode == NULL)
	{
		return (NULL);
	}
	nNode->n = n;
	nNode->next = *head;
	*head = nNode;

	return (nNode);

}
