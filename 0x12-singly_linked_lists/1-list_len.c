#include "lists.h"

/**
 * list_len - find the number of elements in a linked list
 * @h: linked list
 *
 * Return: Total number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}

	return (length);
}
