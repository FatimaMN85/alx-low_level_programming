#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: thiw function will return 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i <= 99)
	{
		int j;

		j = 0;
		while (j <= 99)
		{
			if (i <= j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');

				if (i != 99 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
