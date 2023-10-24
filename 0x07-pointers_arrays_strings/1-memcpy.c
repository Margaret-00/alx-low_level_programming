#include "main.h"
/**
 * _memcpy - Function that copies memory area
 *@dest: Where memory is stored
 *@src: Where memory is copied
 *@n: the number of bytes
 *
 *Return: copied memory changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	
	}
	return (dest);
}
