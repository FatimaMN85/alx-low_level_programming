#include <stdio.h>
#include <string.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: this function will return ZERO
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
