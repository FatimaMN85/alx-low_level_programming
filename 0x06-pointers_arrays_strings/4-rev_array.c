#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, end, temp;

	end = n - 1;
	for (i = end; i >= n / 2; i--)
	{
		temp = a[end - i];
		a[end - i] = a[i];
		a[i] = temp;
		a[i] = temp;
	}
 }
