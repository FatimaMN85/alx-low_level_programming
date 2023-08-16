#include <stdio.h>

/**
 * main - Fibonacci sequence prints the sum of the even-valued terms
 *
 * Return: always 0
 */
int main(void)
{
	long int first, second, next, sum;

	first = 1;
	second = 2;
	sum = 2;

	while (1)
	{
		next = first + second;

		if (next > 4000000)
		{
			break;
		}

		if (next % 2 == 0)
		{
			sum += next;
		}
		first = second;
		second = next;
	}
	printf("%ld\n", sum);

	return (0);
}
