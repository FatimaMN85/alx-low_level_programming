#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * 
 * Return: will return 0
 */
void times_table(void)
{
	int i;
	int j;
	int res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (j == 0)
			{
				_putchar(res +'0');
			}
			if (res < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
