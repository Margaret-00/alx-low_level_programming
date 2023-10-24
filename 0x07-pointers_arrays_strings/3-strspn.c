#include "main.h"
/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: always return to 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			n++;
			break;
		}
		s++;
	}
	return (n);
}
