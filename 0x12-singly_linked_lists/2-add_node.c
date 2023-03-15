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
 * add_node - adds a node at the beginning of a list
 * @head: pointer to the linked list head
 * @str: string to pass to new node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	char *s = strdup(str);

	if (!new_node || !s)
		return (NULL);

	new_node->str = s;
	new_node->len = _strlen(s);
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
