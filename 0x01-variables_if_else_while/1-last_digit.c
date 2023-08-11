#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -will assign a random number to n each time it is executed.
 * it will test the last digit on n
 *D
 * Return: this function will return zero
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{ printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}

	return (0);
}
