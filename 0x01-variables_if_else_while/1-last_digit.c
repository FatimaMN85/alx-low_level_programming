#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -will assign a random number to n each time it is executed.
 * it will test the last digit on n
 *
 * Return: this function will return zero
 */
int main(void)
{
	int n;
	int lastDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDgt = n % 10;

	if (lastDgt > 5)
	{ printf("Last digit of %d is %d and is greater than 5\n", n, lastDgt);
}
	else if (lastDgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDgt);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDgt);
	}

	return (0);
}
