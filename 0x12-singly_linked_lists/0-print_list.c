#include <stdio.h>
#include "lists.h"

/**
 * print_list - This prints all the elements of a linked list in the code.
 * @h: pointer to the list_t list to print.
 *
 * Return: number of nodes printed in the code
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		elements++;
	}

	return (elements);
}
