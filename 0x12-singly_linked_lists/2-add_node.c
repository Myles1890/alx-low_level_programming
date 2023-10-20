#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - This adds new node to the beginning of a linked list.
 * @head: this ia a double pointer to the list_t list.
 * @str: The new string to add in the node.
 *
 * Return: This is the address of new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newelement;
unsigned int len = 0;

while (str[len])
len++;
newelement = malloc(sizeof(list_t));
if (!newelement)
return (NULL);
newelement->str = strdup(str);
newelement->len = len;
newelement->next = (*head);
(*head) = newelement;
return (*head);
}
