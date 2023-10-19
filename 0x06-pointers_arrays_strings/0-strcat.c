#include <main.h>
/**
 *_strcat - Concatenates two strings.
 *
 *@dest: output dest
 *@src: input source
 *
 * Return: return to dest, that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
