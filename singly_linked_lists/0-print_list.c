#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: node pointer head
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	for (; h; x++)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
