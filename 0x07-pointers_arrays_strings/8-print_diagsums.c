#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array
 * @size: the size
 */
void print_diagsums(int *a, int size)
{
	int sum_main, sum_secondary, i;

	sum_main = 0;
	sum_secondary = 0;
	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_secondary += a[i * size + (size - 1) - i];
	}
	printf("%d, %d\n", sum_main, sum_secondary);
}
