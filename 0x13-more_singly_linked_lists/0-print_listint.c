#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * &h: Singly linked list
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t No_of_elements;

	No_of_elements = 0;
	while ( != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		No_of_elements++;
	}
	return (No_of_elements);
}
