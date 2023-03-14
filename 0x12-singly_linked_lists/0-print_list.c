#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to a list
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	char *s;

	while (h)
	{
		s = h->str;

		if (s)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		len++;
	}

	return (len);
}
