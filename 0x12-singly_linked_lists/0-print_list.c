#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints a linked list
 * @h: pointer to  head of list
 * Return: number of nodes in list as size_t
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
