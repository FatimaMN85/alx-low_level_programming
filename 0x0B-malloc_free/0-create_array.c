#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of array
 * @c: character
 * Return: NULL if size = 0 otherwise pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);

}
