#include <stdio.h>
#include <string.h>

/**
 * main -prints the alphabet in lowercase, and then in uppercase
 *
 * Return: this function will return zero
 */
int main(void)
{
	char low, upp;

	low = 'a';
	upp = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');

	return (0);
}
