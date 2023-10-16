#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed by a variable
 * @dest: The destinyof the array
 * @src: The string copier
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

