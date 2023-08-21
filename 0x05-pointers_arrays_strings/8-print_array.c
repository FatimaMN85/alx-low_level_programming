#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: first args
 * @n:  the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
	{
		printf("-1\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
