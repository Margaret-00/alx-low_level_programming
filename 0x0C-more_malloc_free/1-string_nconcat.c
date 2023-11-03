#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: number of concatenates
 * @s2: number of strings
 * @n: size of the bytes
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count1, count2;
	int sign = n;
	char *ptr;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (sign >= len2)
	{
		sign = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (count1 = 0; count1 < len1; count1++)
	{
		ptr[count1] = s1[count1];
	}
	for (count2 = 0; count2 < sign; count2++)
	{
		ptr[count1++] = s2[count2];
	}
	ptr[count1++] = '\0';
	return (ptr);
}
