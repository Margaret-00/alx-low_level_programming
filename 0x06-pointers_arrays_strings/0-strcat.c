#include <stdio.h>

/**
 * _ stract.c - function that concatenates two strings
 * @scr: input
 * @dest: output
 * return: Alywas 0
 */

char *_strcat(char *dest, char *src);
{

int i, j

	for (i = 0; dest[i] != '\0'; i++);
		
	for (j = 0; src[j] != '\0'; j++);
	
		dest[i] = src[j];
		i++;
	
	return (dest);
}
