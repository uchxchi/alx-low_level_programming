#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: the head of listint_t.
*
* Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;
	listint_t *temp = h;

	if (temp != NULL)
	{
		num_nodes++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (num_nodes);
}
