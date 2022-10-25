#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * listint_t - linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ty, *fa;

	if (head == NULL || head->next == NULL)
		return (NULL);

	ty = head->next;
	fa = (head->next)->next;

	while (fa)
	{
		if (ty == fa)
		{
			ty = head;

			while (ty != fa)
			{
				ty = ty->next;
				fa = fa->next;
			}
			return (ty);
		}
		ty = ty->next;
		fa = (fa->next)->next;
	}
	return (NULL);
}
