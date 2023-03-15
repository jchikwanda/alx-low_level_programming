#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list
 *
 * Return: total number of items in linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
