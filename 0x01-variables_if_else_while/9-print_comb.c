#include <stdio.h>
#include <string.h>

/**
 * main -  prints all possible combinations of single-digit numbers.
 *
 * Return: this function will return 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
