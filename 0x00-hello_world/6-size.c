#include <stdio.h>
#include <string.h>

/**
 * main - this function  prints the size of various types
 *
 * Return: this function will return zero
 */
int main(void)
{
	printf("Size of a char: %\lu byte(s)\n", sizeof(char));
	printf("Size of an int: %\lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %\lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %\lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %\lu byte(s)\n", sizeof(float));

	return (0);
}
