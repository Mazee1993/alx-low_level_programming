#include "lists.h"

/**
 * listint_len - Function returning number of elements in linked listint_t list
 * @h: Pointer to the head of the linked list
 * Retuen: The numb of elements in linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}
return (num);
}
