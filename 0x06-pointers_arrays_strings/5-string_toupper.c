#include "main.h"
/**
 * string_toupper - change all lowercase letters to uppercase
 * @n: input
 * Return: 0
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'Z')
			n[i] = n[i] - 32;
		 i++;
	}
	return (n);
}
