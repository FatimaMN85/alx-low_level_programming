#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
