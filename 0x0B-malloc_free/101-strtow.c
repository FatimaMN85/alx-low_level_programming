#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * is_space - check if a character is a whitespace character
 * @c: the character
 * Return: 1 if the c is a whitespace character and 0 otherwise
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Word count
 * @str: the string
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			count++;
			in_word = 1;
		}
		str++;
	}
	return (count);
}

/**
 * duplicate_word - duplicate string
 * @str: the string
 * Return: pointer
 */
char *duplicate_word(char *str)
{
	char *word;
	int len, i;

	len = 0;
	while (str[len] && !is_space(str[len]))
	{
		len++;
	}

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		word[i] = str[i];
	}
	word[len] = '\0';

	return (word);
}

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: pointer
 */
char **strtow(char *str)
{
	int word_index, in_word, num_words, i;
	char **word_array;

	word_index = 0;
	in_word = 0;
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);
	word_array = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (word_array == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		if (is_space(*str))
			in_word = 0;
		else if (in_word == 0)
		{
			word_array[word_index++] = duplicate_word(str);
			if (word_array[word_index - 1] == NULL)
			{
				for (i = 0; i < word_index - 1; i++)
					free(word_array[i]);
				free(word_array);
				return (NULL);
			}
			in_word = 1;
		}
		str++;
	}
	word_array[num_words] = NULL;
	if (num_words == 0)
		return (NULL);
	else
		return (word_array);
}
