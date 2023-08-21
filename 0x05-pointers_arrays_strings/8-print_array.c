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

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
