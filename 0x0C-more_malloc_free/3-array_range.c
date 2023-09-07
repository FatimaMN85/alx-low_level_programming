#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: min number
 * @max: max number
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *res, i;

	if (min > max)
	{
		return (NULL);
	}
	res = malloc(sizeof(int) * (max - min + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		res[i - min] = i;
	}
	return (res);
}
