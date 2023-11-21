#include "main.h"
/**
 * _strpbrk - Function that searches a string for any set of bytes.
 * @s: matches the bytes
 * @accept: input
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
        unsigned int index, count;

        for (index = 0; s[index] != '\0'; index++)
        {
                for (count = 0; accept[count] != '\0'; count++)
                {
                        if (accept[count] == s[index])
                        {
                                return (&s[index]);
                        }
                }
        }
        return (0);
}
