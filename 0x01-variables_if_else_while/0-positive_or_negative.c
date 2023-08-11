#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This function will assign a random number to variable n each time it is executed.
 * It will test whether the number stored in the variable n is positive or negative.
 *
 * Return: this function will return zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
