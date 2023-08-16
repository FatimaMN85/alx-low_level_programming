#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int count, i;
	long int first, second, next;

	count = 50;
	first = 1;
	second = 2;
	printf("%ld, %ld", first, second);

	for (i = 2; i < count; i++)
	{
		next = first + second;
		printf(", %ld", next);

		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
