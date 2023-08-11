#include <stdio.h>
#include <string.h>

/**
 * main -prints all single digit numbers of base 10 starting from 0
 *
 * Return: this function will return 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
