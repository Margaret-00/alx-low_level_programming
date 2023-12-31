#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * @array: output
 * @size: size of array
 * @action: print in regular
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
