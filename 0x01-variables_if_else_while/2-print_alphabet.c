#include <stdio.h>
#include <string.h>

/**
 * main - this function will prints the alphabet in lowercas.
 *
 * Return: this function will return zero
 */
int main(void)
{
	char ch;
	
	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
