#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * my_memset - sets a block of memory to a specific value
 * @str: string
 * @val: the value
 * @n_b: The number of bytes in the memory block
 */
void *my_memset(char *str, char val, unsigned int n_b)
{
	unsigned int i;

	for (i = 0; i < n_b; i++)
	{
		str[i] = val;
	}
	return (str);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements of array
 * @size: the size, in bytes, of each element in the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	my_memset(p, 0, nmemb * size);

	return (p);
}
