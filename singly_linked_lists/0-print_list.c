#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: node pointer head
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x;

	x = 0;
	while (h != NULL)
	{
		x++;

	if (h->str == NULL)
		printf("[%d] (nil)\n", 0);
	else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
