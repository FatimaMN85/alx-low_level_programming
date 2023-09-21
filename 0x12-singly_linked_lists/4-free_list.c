#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list - frees a list
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
