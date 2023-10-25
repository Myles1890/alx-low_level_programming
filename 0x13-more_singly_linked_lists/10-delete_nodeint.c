#include "lists.h"

/**
 * delete_nodeint_at_index - This deletes a
 * node in a linked list at a certain index.
 * @head: The pointer to first element in the list.
 * @index: The index of node to delete.
 *
 * Return: 1 if successful or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)

	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);

	return (1);
	}
	while (j < index - 1)
	{
		if (!temp || !(temp->next))

		return (-1);
		temp = temp->next;
		j++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
