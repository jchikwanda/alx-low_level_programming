#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer of a linked list
 *
 * Return: nothing on success
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
