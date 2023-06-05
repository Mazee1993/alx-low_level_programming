#include "lists.h"

/**
 * free_listint - Function freeing a linked list
 * @head: freeing listint_t list
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
