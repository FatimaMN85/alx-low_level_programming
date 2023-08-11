#include <stdio.h>
#include <string.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: this function will return 0
 */
int main(void)
{
	char low;

	low = 'z';
	
	while (low >= 'a')
	{
		putchar(low);
		low--;
	}
	putchar('\n');

	return (0);
}
