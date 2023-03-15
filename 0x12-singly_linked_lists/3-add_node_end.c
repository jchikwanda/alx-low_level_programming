#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - gets the length of the string
 * @s: string
 *
 * Return: length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node_end - adds node at the end of a list
 * @head: head of the linked list
 * @str: content of new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *head_ref = *head;
	char *s = strdup(str);

	if (!new_node)
		return (NULL);

	new_node->len = _strlen(s);
	new_node->str = s;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (head_ref->next)
		head_ref = head_ref->next;

	head_ref->next = new_node;

	return (*head);
}
