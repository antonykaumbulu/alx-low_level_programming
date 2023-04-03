#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: Singly linked list
 *
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
