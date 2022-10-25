#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: A pointer to listint_t structure
 * Returns: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	const listint_t *one = head, *two = head;

	if (head == NULL)
		exit(98);

	while (one && two && two->next && head)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}
	head = NULL;
	return (nodes);
}
