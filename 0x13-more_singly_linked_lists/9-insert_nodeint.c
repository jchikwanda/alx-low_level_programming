#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *head_ref = *head;
	unsigned int size = 0;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = head_ref;
		*head = new_node;

		return (new_node);
	}

	while (size < (idx - 1))
	{
		if (head_ref == NULL || (head_ref)->next == NULL)
			return (NULL);
		size++;
		head_ref = head_ref->next;
	}

	new_node->next = head_ref->next;
	head_ref->next = new_node;

	return (new_node);
}
