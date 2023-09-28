#include "main.h"
#include <stdio.h>

/**
 * get_bit - return the value of a bit at a given index
 * @n: number
 * @index: the index
 * Return: index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
