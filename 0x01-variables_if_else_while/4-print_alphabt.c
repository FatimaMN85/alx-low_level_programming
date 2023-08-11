#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: this function will return zero
 */
int main(void)
{
	char low;

	low = 'a';
	while (low <= 'z')
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
		low++;
	}
	putchar('\n');

	return (0);
}
