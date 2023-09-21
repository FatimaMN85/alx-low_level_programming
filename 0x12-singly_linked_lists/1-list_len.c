#include "lists.h"
#include <stdlib.h>

/**
 * list_len - eturns the number of elements in a linked list
 * @h: the pointer
 *
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
