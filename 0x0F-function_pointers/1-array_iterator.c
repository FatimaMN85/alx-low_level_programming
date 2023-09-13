#include "function_pointers.h"
#include <string.h>
#include <stddef.h>

/**
 * array_iterator - executes a function
 * @size: the size of the array
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int)){
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}	
}
