#include "main.h"		
#include <stdlib.h>
		
/**
		
 * create_array - function that returns a pointer to a newly allocated space in memory
 * @size: size of array
 * @c: output
 * Return: 0
 */
		
char *create_array(unsigned int size, char c)
{
		
	char *str;
		
	unsigned int i;
			
	str = malloc(sizeof(char) * size);
		
	if (size == 0 || str == NULL)
		
		return (NULL);
		
	for (i = 0; i < size; i++)
		
		str[i] = c;
		
	return (str);
		
}
