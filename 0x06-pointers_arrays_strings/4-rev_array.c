#include "main.h"
/**
 * rev_array - Reverses the content of an array
 * @a: input array
 * @n: position of array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
