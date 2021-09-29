#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a given parameter
 * @array: a pointer to the name array
 * @size: is the size of the array
 * @action: is a pointer to the function we use
 *
 * Return:Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{

	for (i = 0; i < size; i++)
		{
		action(array[i]);
	}
	}
}

