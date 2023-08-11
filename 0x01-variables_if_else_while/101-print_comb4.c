#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: this function will return 0
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
			int k;

			k = j + 1;
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7 || j != 8 || k != 9 )
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
