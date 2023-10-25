#include "lists.h"

/**
 * insert_nodeint_at_index - This inserts a new node
 * in a linked list at positions.
 * @head: This is a pointer to first node in the list.
 * @idx: The index where the new node is added.
 * @n: The data to insert in the new node.
 *
 * Return: pointer to the new node, or NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int j;
	listint_t *newnode;
	listint_t *t = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)

		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}
	for (j = 0; t && j < idx; j++)
	{
		if (j == idx - 1)
		{
			newnode->next = t->next;
			t->next = newnode;

		return (newnode);
		}
		else
			t = t->next;
	}
	return (NULL);
}
