#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * crackme - generates random valid passwords
 *
 * Return: 0
 */
int main(void)
{
	int password[100];
	int i, totalSum, remainingSum, missingDigit;

	totalSum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		totalSum += (password[i] + '0');
		putchar(password[i] + '0');
		remainingSum = 2772 - totalSum - '0';

		if (remainingSum < 78)
		{
			missingDigit = remainingSum;
			totalSum += missingDigit;
			putchar(missingDigit + '0');
			break;
		}
	}

	return (0);
}
