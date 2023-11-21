#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint
 * @h: Head of the listint
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
