#include <stdio.h>

/**
 * main -  prints the first 98 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int prev1 = 1;
	unsigned long int prev2 = 2;
	unsigned long int limit = 1000000000;
	unsigned long int before1;
	unsigned long int before2;
	unsigned long int after1;
	unsigned long int after2;

	printf("%lu", prev1);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", prev2);
		prev2 += prev1;
		prev1 = prev2 - prev1;
	}

	before1 = (prev1 / limit);
	before2 = (prev1 % limit);
	after1 = (prev2 / limit);
	after2 = (prev2 % limit);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", after1 + (after2 / limit));
		printf("%lu", after2 % limit);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");

	return (0);
}
