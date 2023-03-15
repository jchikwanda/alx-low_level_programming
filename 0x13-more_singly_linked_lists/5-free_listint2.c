#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer of a linked list
 *
 * Return: nothing on success
 */
void free_listint2(listint_t **head)
{
	listint_t *head_ref = *head;
	listint_t *temp_node;

	while (head_ref)
	{
		temp_node = head_ref->next;
		free(head_ref);
		head_ref = temp_node;
	}

	*head = NULL;
}
