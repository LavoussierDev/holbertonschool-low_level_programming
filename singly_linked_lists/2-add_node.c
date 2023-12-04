#include "lists.h"

/**
 * add_node - adds a node at beginning of a list_t list
 * @head: pointer to a pointer to a list element
 * @str: string element of a node
 * Return: Address of new element or NULL if it failed
 **/

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *x;

	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);
	x->str = strdup(str);
	if (!x->str)
	{
		free(x);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;
	x->len = len;
	x->next = *head;
	*head = x;
	return (x);
}
