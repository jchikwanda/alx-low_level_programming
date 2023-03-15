#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list to be printed
 *
 * Return: Size of the linked list;
 */
size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
