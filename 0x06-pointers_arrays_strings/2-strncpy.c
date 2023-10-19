#include "main.h"
/**
 * _strncpy - function that cpies a string, with number of bytes
 * @dest: Destination output
 * @src: source value
 * @n: number of bytes
 *
 * Return: copied strings with number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
