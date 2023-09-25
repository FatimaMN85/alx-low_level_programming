#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - the sum of all the data (n) of a linked list
 * @head: pointer
 * Return: the sum, or if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
