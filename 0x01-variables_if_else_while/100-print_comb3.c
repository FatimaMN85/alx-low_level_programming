#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: thiw function will return 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		int j;
	
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
