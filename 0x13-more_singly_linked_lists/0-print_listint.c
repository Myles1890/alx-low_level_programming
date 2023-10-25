#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t number = 0;

 while (d)
 {
 printf("%d\n", d->n);
 number++;
 h = d->next;
 }

 return (number);
}

