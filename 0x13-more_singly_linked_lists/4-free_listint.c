#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
