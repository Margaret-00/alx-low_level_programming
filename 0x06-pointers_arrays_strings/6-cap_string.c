#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @entry: input string
 * Return: void
 */
char *cap_string(char *entry)
{
	int index = 0;

    while (entry[index])
    {
        if (entry[index] >= 'a' && entry[index] <= 'z')
        {
            if (index == 0 ||

	        entry[index - 1] == ' ' ||
                entry[index - 1] == '\t' ||
                entry[index - 1] == '\n' ||
                entry[index - 1] == ',' ||
                entry[index - 1] == ';' ||
                entry[index - 1] == '.' ||
                entry[index - 1] == '!' ||
                entry[index - 1] == '?' ||
                entry[index - 1] == '"' ||
                entry[index - 1] == '(' ||
                entry[index - 1] == ')' ||
                entry[index - 1] == '{' ||
                entry[index - 1] == '}')
	    {
	        
	        enrty[index] -= 32; 
            }
        }
        index++;
    }
    return entry;
}
