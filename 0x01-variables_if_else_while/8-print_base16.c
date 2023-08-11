#include <stdio.h>
#include <string.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 * Return: this function will return 0
 */
int main(void)
{
	char ch;

	ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	ch = 'a';
	
	while(ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
