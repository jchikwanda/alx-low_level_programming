#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the linked list
 * @index: position of node been sought
 *
 * Return: nth node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int size = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (size == index)
			return (head);
		size++;
		head = head->next;
	}

	return (NULL);
}
