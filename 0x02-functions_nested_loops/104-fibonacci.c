#include <stdio.h>

/** 
 * main -  prints the first 98 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int count, i, first, second, next;

	count = 98;
	first = 1;
	second = 2;
	for (i = 0; i < count; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", first);

		next = first + second;
		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
