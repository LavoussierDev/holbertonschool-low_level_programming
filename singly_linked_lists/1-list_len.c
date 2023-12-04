#include "lists.h"

/**
 * list_len - returns elements of a linked list_t list
 * @h: Head of node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t x;

	x = 0;
	while (h != NULL)
	{
		x++;
		h = h->next;
	}

	return (x);
}
