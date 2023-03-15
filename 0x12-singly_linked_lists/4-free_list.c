#include "lists.h"

/**
 * free_list - frees a list
 * @head: list to be looped through
 *
 * Return: nothing on success
 */
void free_list(list_t *head)
{
	list_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
