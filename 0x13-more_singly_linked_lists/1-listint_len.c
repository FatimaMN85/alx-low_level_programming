#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - return the number of elements in a linked list
 * @h: pointer
 *
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
