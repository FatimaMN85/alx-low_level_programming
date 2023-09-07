#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * my_memset - sets a block of memory to a specific value
 * @ptr: pointer
 * @val: the value
 * @n_b: The number of bytes in the memory block
 */
void *my_memset(void *ptr, int val, size_t n_b)
{
	unsigned char *byt_ptr = (unsigned char *)ptr;
	size_t i;

	for (i = 0; i < n_b; i++)
	{
		byt_ptr[i] = (unsigned char)val;
	}

	return (ptr);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements of array
 * @size: the size, in bytes, of each element in the array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	my_memset(ptr, 0, nmemb * size);

	return (ptr);
}
