#include "lists.h"

/**
 * print_listint - This prints all the elements of a linked list.
 * @h: this is the linked list of type listint_t to print.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
 size_t number = 0;

 while (d)
 {
 printf("%d\n", d->n);
 number++;
 d = d->next;
 }

 return (number);
}

