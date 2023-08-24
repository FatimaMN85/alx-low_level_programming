#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, end, temp;

	i = 0;
	end = n - 1;
	while (i < end)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		i++;
		end--;
	}
 }
