#include "lists.h"

/**
 * free_list - frees a list
 * @head: list to be looped through
 *
 * Return: nothing on success
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while(head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
