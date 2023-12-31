#include "lists.h"

/**
 * add_nodeint_end - This adds a node at the end of a linked list.
 * @head: This is the pointer to the first element in the list.
 * @n: The data to insert in the new element.
 *
 * Return: pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	return (newnode);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = newnode;

	return (newnode);
}
