#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer
 * Return: the head node’s data (n). if linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	data = 0;
	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
