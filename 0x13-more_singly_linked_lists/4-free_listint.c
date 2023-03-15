#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of the linked list
 *
 * Return: nothing on success
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
