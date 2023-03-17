#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: head of the linked list
 * @index: given index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *head_ref = *head, *temp_node, *next_node;
	unsigned int size = 0;

	if (!head_ref)
		return (-1);

	if (index == 0)
	{
		temp_node = head_ref->next;
		free(head_ref);
		*head = temp_node;

		return (1);
	}

	while (size < (index - 1))
	{
		if (head_ref == NULL || head_ref->next == NULL)
			return (-1);
		size++;
		head_ref = head_ref->next;
	}

	temp_node = head_ref->next;
	next_node = temp_node->next;
	free(temp_node);
	head_ref->next = next_node;

	return (1);
}
