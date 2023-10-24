#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: ponter to the memory area
 * @b: constant byte
 * @n: bytes of the memory area pointed
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;

		n--;
	}
	return (s);
}
