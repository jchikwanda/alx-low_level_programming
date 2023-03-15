#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list, \
 and returns the head node’s data (n)
 * @head: head of the linked list
 *
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp_node;

	if (*head == NULL)
		return (0);

	temp_node = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp_node;

	return (data);
}
