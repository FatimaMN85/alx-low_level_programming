#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: the string
 * Return: integer
 */
int _atoi(char *s)
{
	int index, signCount, totalDigits, num, foundDigits;

	index = 0;
	signCount = 0;
	totalDigits = 0;
	num = 0;
	foundDigits = 0;
	while (s[totalDigits] != '\0')
	{
		totalDigits++;
	}
	while (index < totalDigits && !foundDigits)
	{
		if (s[index] == '-')
		{
			++signCount;
		}
		if (s[index] >= '0' && s[index] <= '9')
		{
			int digit = s[index] - '0';
			if (signCount % 2)
			{
				digit = -digit;
			}
			num = num * 10 + digit;
			foundDigits = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
			{
				break;
			}
			foundDigits = 0;
		}
		index++;
	}
	if (!foundDigits)
	{
		return 0;
	}

	return (num);
}
