#include "lists.h"

/**
 * sum_listint - This calculates the sum of all the data in a listint_t list.
 * @head: The first node in the linked list.
 *
 * Return: The resulting sum.
 */
int sum_listint(listint_t *head)

{
	int sumt = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumt += temp->n;
		temp = temp->next;
	}

	return (sumt);

}
