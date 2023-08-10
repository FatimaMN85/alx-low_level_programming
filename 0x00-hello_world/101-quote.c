#include <unistd.h>

/**
 * main - this function without the man (3) printf or man (3) puts
 *
 * Return: this function will return one
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
