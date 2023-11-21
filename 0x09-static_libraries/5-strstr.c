#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to find.
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
        while (*haystack)
        {
                char *temp;

                temp = haystack;
                while (*needle == *haystack)
                {
                        haystack++, needle++;
                }
                if (*needle == '\0')
                        return (temp);
                haystack++;
        }
        return (0);
}
