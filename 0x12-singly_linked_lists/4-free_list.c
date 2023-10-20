#include "lists.h"
#include <stdlib.h>
/**
 * free_list - This frees the linked list.
 * @head: This is list_t list to be freed.
 */
void free_list(list_t *head)
{
 list_t *pt;

 while (head)
 {
 pt = head->next;
 free(head->str);
 free(head);
 head = pt;
 }
}
