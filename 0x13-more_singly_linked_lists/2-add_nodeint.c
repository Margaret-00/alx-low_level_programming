#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * @head: head of pointer
 * @n: new node to insert
 * Return:0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
