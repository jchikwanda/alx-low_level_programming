#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of the linked list
 * @n: number to be added to the new node
 *
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *head_ref = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!head_ref)
	{
		*head = new_node;
		return (*head);
	}

	while (head_ref->next)
		head_ref = head_ref->next;

	head_ref->next = new_node;

	return (head_ref);
}
