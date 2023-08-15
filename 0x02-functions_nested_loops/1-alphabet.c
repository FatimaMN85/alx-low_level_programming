#include "main.h"

/**
 * print_alphabet - will print  alphabet in lowercase
 *
 * Return: this function will return 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
