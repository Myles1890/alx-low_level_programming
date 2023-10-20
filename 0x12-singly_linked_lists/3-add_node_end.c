#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This adds a new node to end of a linked list.
 * @head: This is double pointer to list_t list.
 * @str: The string to put in the new node.
 *
 * Return: must be address of the new element, or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newelement;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newelement = malloc(sizeof(list_t));
	if (!newelement)
		return (NULL);

	newelement->str = strdup(str);
	newelement->len = len;
	newelement->next = NULL;

	if (*head == NULL)
	{
		*head = newelement;
		return (newelement);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newelement;

	return (newelement);
}
