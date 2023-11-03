#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _malloc_checked - function that allocates memory
 * @b: Returns a pointer to the allocated memory
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);

}
