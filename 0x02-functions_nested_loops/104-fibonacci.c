#include <stdio.h>

/**
 * main -  prints the first 98 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int count, i, first, second, next;

	count = 98;
	first = 1;
	second = 2;
	printf("%lu, %lu, ", first, second);
	
	for (i = 0; i < count; i++)
	{
		next = first + second;
		first = second;
		second = next;

		if (i != 0)
		{
			printf(", ");
		}
		printf("%lu", next);
	}
	printf("\n");

	return (0);
}
